#include "login_for_admin.h"
#include "ui_login_for_admin.h"
#include <QMessageBox>

login_for_admin::login_for_admin(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::login_for_admin)
{
    ui->setupUi(this);
}

login_for_admin::~login_for_admin()
{
    delete ui;
}

void login_for_admin::on_pushButton_clicked()
{
    QString log = ui->admin_login->text();
    QString pass = ui->admin_pass->text();

    if(log == "Ilya721" and pass == "qw16"){
        users.setWindowTitle("RentAuto");
        users.show();
        this->close();
        ui->admin_login->clear();
        ui->admin_pass->clear();
    }
    else{
        QMessageBox::warning(this, "", "Неверно введен логин или пороль!");
    }
}

