#ifndef LOGIN_FOR_CARS_BD_H
#define LOGIN_FOR_CARS_BD_H

#include <QDialog>
#include <cars_bd.h>

namespace Ui {
class login_for_cars_bd;
}

class login_for_cars_bd : public QDialog
{
    Q_OBJECT

public:
    explicit login_for_cars_bd(QWidget *parent = nullptr);
    ~login_for_cars_bd();

private slots:
    void on_pushButton_clicked();

private:
    Ui::login_for_cars_bd *ui;

    cars_bd cars;
};

#endif // LOGIN_FOR_CARS_BD_H
