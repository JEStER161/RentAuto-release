#ifndef REGISTRATION_H
#define REGISTRATION_H
#include <string>
#include <QDialog>
#include "login_for_admin.h"

#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>

using namespace std;

struct Costumer{
    int id;
    QString name;
    QString phone;
    QString login;
    QString password;
};


namespace Ui {
class registration;
}

class registration : public QDialog
{
    Q_OBJECT

public:
    explicit registration(QWidget *parent = nullptr);
    ~registration();

signals:
    void firstWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::registration *ui;

    login_for_admin* admin;
};

#endif // REGISTRATION_H
