#ifndef FIRSTWINDOW_H
#define FIRSTWINDOW_H

#include <QMainWindow>

#include <QMessageBox>

#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>

#include <login_for_cars_bd.h>

namespace Ui {
class FirstWindow;
}

class FirstWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FirstWindow(QWidget *parent = nullptr);
    ~FirstWindow();

    QString name;
    QString phone;

private slots:


    void on_comboBox_activated(int index);

    void on_pushButton_clicked();

    void on_admin_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::FirstWindow *ui;

    int first_day;
    int last_day;
    int total_days;

    int cost_all;
    QString take_car;

    login_for_cars_bd* adm;


};

#endif // FIRSTWINDOW_H
