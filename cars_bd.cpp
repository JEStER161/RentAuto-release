#include "cars_bd.h"
#include "ui_cars_bd.h"

cars_bd::cars_bd(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cars_bd)
{
    ui->setupUi(this);
}

cars_bd::~cars_bd()
{
    delete ui;
}

void cars_bd::on_pushButton_2_clicked()
{
    QSqlDatabase::removeDatabase("cars_bd");
    this->close();
}


void cars_bd::on_pushButton_clicked()
{
    {
        QSqlDatabase db;
        db = QSqlDatabase::addDatabase("QSQLITE", "cars_bd");
        db.setDatabaseName("./users_DB.db");
        if(db.open()){
            qDebug("open cars_bd");
        }
        else{
            qDebug("no open");
        }


        model = new QSqlTableModel(this, db);
        model->setTable("Cars");
        model->select();
        ui->tableView->setModel(model);

        db.close();
    }

}


void cars_bd::on_pushButton_3_clicked()
{
    {
        QSqlDatabase db;
        db = QSqlDatabase::addDatabase("QSQLITE", "delete_car");
        db.setDatabaseName("./users_DB.db");
        if(db.open()){
            qDebug("open delete_car");
        }
        else{
            qDebug("no open");
        }
        QSqlQuery query(db);
        query.prepare("UPDATE Cars SET Rent = :rent, First_day = :first, Last_day = :last,  Name_tenant = :tenant, Phone_tenant = :phone WHERE Cars_name = :name");
        query.bindValue(":rent", "");
        query.bindValue(":first", "");
        query.bindValue(":last", "");
        query.bindValue(":tenant", "");
        query.bindValue(":phone", "");
        query.bindValue(":name", car);
        query.exec();

        db.close();
    }
    QSqlDatabase::removeDatabase("delete_car");
}


void cars_bd::on_tableView_clicked(const QModelIndex &index)
{
    car = index.data().toString();
    qDebug() << car;
}

