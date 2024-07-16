#include "login_for_cars_bd.h"
#include "ui_login_for_cars_bd.h"
#include <QMessageBox>

login_for_cars_bd::login_for_cars_bd(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::login_for_cars_bd)
{
    ui->setupUi(this);
}

login_for_cars_bd::~login_for_cars_bd()
{
    delete ui;
}

void login_for_cars_bd::on_pushButton_clicked()
{
    QString log = ui->admin_login->text();
    QString pass = ui->admin_pass->text();

    if(log == "Ilya721" and pass == "qw16"){
        cars.setWindowTitle("RentAuto");
        cars.show();
        this->close();
        ui->admin_login->clear();
        ui->admin_pass->clear();
    }
    else{
        QMessageBox::warning(this, "", "Неверно введен логин или пороль!");
    }
}

