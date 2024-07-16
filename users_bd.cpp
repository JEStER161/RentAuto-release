#include "users_bd.h"
#include "ui_users_bd.h"

users_bd::users_bd(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::users_bd)
{
    ui->setupUi(this);


}

users_bd::~users_bd()
{
    delete ui;
}

void users_bd::on_pushButton_clicked()
{
    model->removeRow(row);
}


void users_bd::on_tableView_clicked(const QModelIndex &index)
{
    row = index.row();
}


void users_bd::on_pushButton_2_clicked()
{
    {
        QSqlDatabase db;
        db = QSqlDatabase::addDatabase("QSQLITE", "users_bd");
        db.setDatabaseName("./users_DB.db");
        if(db.open()){
            qDebug("open users_bd");
        }
        else{
            qDebug("no open");
        }


        model = new QSqlTableModel(this, db);
        model->setTable("Users");
        model->select();
        ui->tableView->setModel(model);

    }
}


void users_bd::on_pushButton_3_clicked()
{
    this->close();
}

