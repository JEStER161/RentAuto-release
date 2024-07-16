#ifndef CATALOG_H
#define CATALOG_H

#include <QDialog>
#include <firstwindow.h>
#include <string>

namespace Ui {
class Catalog;
}

class Catalog : public QDialog
{
    Q_OBJECT

public:
    QString name;
    QString phone;
    explicit Catalog(QWidget *parent = nullptr);
    ~Catalog();
signals:
    void mainWindow();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Catalog *ui;
    FirstWindow rent_auto;

};

#endif // CATALOG_H
