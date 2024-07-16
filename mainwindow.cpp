#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    catalog = new Catalog();
    connect(catalog, &Catalog::mainWindow, this, &MainWindow::show);
    catalog->setWindowTitle("RentAuto");


    windowRegistration = new registration();
    connect(windowRegistration, &registration::firstWindow, this, &MainWindow::show);
    windowRegistration->setWindowTitle("RentAuto");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    {
        QSqlDatabase db;

        //Подключение к базе данных
        db = QSqlDatabase::addDatabase("QSQLITE", "mainwindow");
        db.setDatabaseName("./users_DB.db");
        if(db.open()){
            qDebug("open mainwindow");
        }
        else{
            qDebug("no open");
        }
        QSqlQuery query(db);
        //Проверка на вход
        QString login = ui->login->text();
        QString password = ui->pass->text();
        if(query.exec("SELECT Login, Password, Name, Phone FROM Users")){
            while(query.next() and !catalog->isVisible()){
                QString l = query.value(0).toString();
                QString pas = query.value(1).toString();

                if(login == l and password == pas){

                    QString name = query.value(2).toString();
                    QString phone = query.value(3).toString();
                    catalog->name = name;
                    catalog->phone = phone;
                    qDebug() << name << phone;

                    catalog->show();
                    ui->pass->clear();
                    ui->login->clear();
                    ui->statusbar->showMessage("");
                    this->close();
                }
                else{
                    ui->statusbar->showMessage("Неверный логин или пороль!");
                }
            }
        }
        else{
            qDebug() << "Error: " << query.lastError().text();
        }
        db.close();
    }
    QSqlDatabase::removeDatabase("mainwindow");
}



void MainWindow::on_pushButton_2_clicked()
{
    windowRegistration->show();
    ui->login->clear();
    ui->pass->clear();
    this->close();

}

