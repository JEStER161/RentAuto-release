#include "registration.h"
#include "ui_registration.h"
#include <QMessageBox>
#include <QDir>

registration::registration(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::registration)
{
    ui->setupUi(this);

}

registration::~registration()
{
    delete ui;
}

void registration::on_pushButton_clicked()
{
    {

        QString path = QCoreApplication::applicationDirPath() + "/users_DB.db";
        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName(path);
        //Подключение к бд
        if(db.open()){
            qDebug("open registration");
        }
        else{
            qDebug("no open");
        }

        //Регистрация нового пользователя в бд

        QString name = ui->name->text();
        QString phone = ui->phone->text();
        QString login = ui->login->text();
        QString password = ui->pass->text();

        QSqlQuery query(db);

        query.exec("CREATE TABLE Users(Name TEXT, Phone TEXT, Login TEXT, Password Text);");
        query.exec("SELECT Login FROM Users");
        while(query.next()){
            QString l = query.value(0).toString();
            if(login == l){
                QMessageBox::warning(this,"", "Пользователь с таким логином уже зарегистрирован. Используйте другой логин");
                return;
            }
        }

        query.prepare("INSERT INTO Users (Name, Phone, Login, Password) "
                       "VALUES (:name, :phone, :login, :password)");
        query.bindValue(":name", name);
        query.bindValue(":phone", phone);
        query.bindValue(":login", login);
        query.bindValue(":password", password);
        query.exec();
        qDebug() << "Current working directory:" << QDir::currentPath();
        QMessageBox::information(this, "","Вы успешно зарегистрированы");

        ui->login->clear();
        ui->phone->clear();
        ui->pass->clear();
        ui->name->clear();

        db.close();
    }
    QSqlDatabase::removeDatabase("registration");
}


void registration::on_pushButton_2_clicked()
{
    admin = new login_for_admin();
    admin->setWindowTitle("RentAuto");
    admin->show();
}


void registration::on_pushButton_3_clicked()
{
    this->close();
    emit firstWindow();
}

