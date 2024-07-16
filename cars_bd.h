#ifndef CARS_BD_H
#define CARS_BD_H

#include <QDialog>

#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include<QSqlTableModel>

namespace Ui {
class cars_bd;
}

class cars_bd : public QDialog
{
    Q_OBJECT

public:
    explicit cars_bd(QWidget *parent = nullptr);
    ~cars_bd();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_tableView_clicked(const QModelIndex &index);

private:
    Ui::cars_bd *ui;

    QSqlTableModel* model;

    QString car;
};

#endif // CARS_BD_H
