#ifndef LOGIN_FOR_ADMIN_H
#define LOGIN_FOR_ADMIN_H

#include <QDialog>
#include "users_bd.h"

namespace Ui {
class login_for_admin;
}

class login_for_admin : public QDialog
{
    Q_OBJECT

public:
    explicit login_for_admin(QWidget *parent = nullptr);
    ~login_for_admin();

private slots:
    void on_pushButton_clicked();

private:
    Ui::login_for_admin *ui;

    users_bd users;//открытие базы данных пользователей
};

#endif // LOGIN_FOR_ADMIN_H
