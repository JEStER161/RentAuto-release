#ifndef USERS_BD_H
#define USERS_BD_H

#include <QDialog>

#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include<QSqlTableModel>

namespace Ui {
class users_bd;
}

class users_bd : public QDialog
{
    Q_OBJECT

public:
    explicit users_bd(QWidget *parent = nullptr);
    ~users_bd();

private slots:
    void on_pushButton_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::users_bd *ui;

    QSqlTableModel* model;

    int row;
};

#endif // USERS_BD_H
