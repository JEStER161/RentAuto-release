#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "registration.h"
#include "catalog.h"
#include <QMainWindow>
#include <QSqlError>



QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;

    registration* windowRegistration;//открытие окна регистрации
    Catalog* catalog;// открытие окна каталога

};
#endif // MAINWINDOW_H
