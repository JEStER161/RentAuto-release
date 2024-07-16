#include "catalog.h"
#include "ui_catalog.h"
#include <QPixmap>


Catalog::Catalog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Catalog)
{
    ui->setupUi(this);

    //Bmw m5 competition
    QPixmap bmw1(":/img/pictures/bmw_m5_competition_2.jpg");
    int bmw1_w = ui->bmw_m5->width();
    int bmw1_h = ui->bmw_m5->height();
    ui->bmw_m5->setPixmap(bmw1.scaled(bmw1_w, bmw1_h, Qt::KeepAspectRatio));

    //Mercedes g63 amg
    QPixmap mercedes1(":/img/pictures/Mercedes_g63_amg_2.jpg");
    int mercedes1_w = ui->Mercedes_g63->width();
    int mercedes1_h = ui->Mercedes_g63->height();
    ui->Mercedes_g63->setPixmap(mercedes1.scaled(mercedes1_w, mercedes1_h, Qt::KeepAspectRatio));

    //Lamborghini huracan
    QPixmap lamb1(":/img/pictures/lamborghini_huracan-2.jpg");
    int lamb1_w = ui->Lamborghini_huracan->width();
    int lamb1_h = ui->Lamborghini_huracan->height();
    ui->Lamborghini_huracan->setPixmap(lamb1.scaled(lamb1_w, lamb1_h, Qt::KeepAspectRatio));

    //Zeekr 001
    QPixmap zeekr1(":/img/pictures/Zeekr_001_2.jpg");
    int zeekr1_w = ui->Zeekr_001->width();
    int zeekr1_h = ui->Zeekr_001->height();
    ui->Zeekr_001->setPixmap(zeekr1.scaled(zeekr1_w, zeekr1_h, Qt::KeepAspectRatio));

    //Rolls_Royce_Wraith
    QPixmap rolls1(":/img/pictures/Rolls_Royce_Wraith-2.jpg");
    int rolls1_w = ui->Rolls_Royce_Wraith->width();
    int rolls1_h = ui->Rolls_Royce_Wraith->height();
    ui->Rolls_Royce_Wraith->setPixmap(rolls1.scaled(rolls1_w, rolls1_h, Qt::KeepAspectRatio));

    //Bentley Continental
    QPixmap bentley1(":/img/pictures/Bentley_Continental-2.jpg");
    int bentley1_w = ui->Bentley_Continental->width();
    int bentley1_h = ui->Bentley_Continental->height();
    ui->Bentley_Continental->setPixmap(bentley1.scaled(bentley1_w, bentley1_h, Qt::KeepAspectRatio));

    //Audi A5
    QPixmap audi1(":/img/pictures/audi_a5-2.jpg");
    int audi1_w = ui->audi_a5->width();
    int audi1_h = ui->audi_a5->height();
    ui->audi_a5->setPixmap(audi1.scaled(audi1_w, audi1_h, Qt::KeepAspectRatio));

    //BMW M3
    QPixmap bmw2(":/img/pictures/bmw_m3-2.jpg");
    int bmw2_w = ui->bmw_m3->width();
    int bmw2_h = ui->bmw_m3->height();
    ui->bmw_m3->setPixmap(bmw2.scaled(bmw2_w, bmw2_h, Qt::KeepAspectRatio));

    //BMW M8
    QPixmap bmw3(":/img/pictures/bmw_m8-2.jpg");
    int bmw3_w = ui->bmw_m8->width();
    int bmw3_h = ui->bmw_m8->height();
    ui->bmw_m8->setPixmap(bmw3.scaled(bmw3_w, bmw3_h, Qt::KeepAspectRatio));

    //BMW XM
    QPixmap bmw4(":/img/pictures/bmw_xm-2.jpg");
    int bmw4_w = ui->bmw_xm->width();
    int bmw4_h = ui->bmw_xm->height();
    ui->bmw_xm->setPixmap(bmw4.scaled(bmw4_w, bmw4_h, Qt::KeepAspectRatio));

    //BMW Z4
    QPixmap bmw5(":/img/pictures/bmw_z4-2.jpg");
    int bmw5_w = ui->bmw_z4->width();
    int bmw5_h = ui->bmw_z4->height();
    ui->bmw_z4->setPixmap(bmw5.scaled(bmw5_w, bmw5_h, Qt::KeepAspectRatio));

    //Chevrolet Camaro
    QPixmap Camaro(":/img/pictures/camaro-2.jpg");
    int camaro_w = ui->Chevrolet_camaro->width();
    int camaro_h = ui->Chevrolet_camaro->height();
    ui->Chevrolet_camaro->setPixmap(Camaro.scaled(camaro_w, camaro_h, Qt::KeepAspectRatio));

    //Dodge Challenger
    QPixmap Dodge(":/img/pictures/Dodge_challenger-2.jpg");
    int dodge_w = ui->dodge_challenger->width();
    int dodge_h = ui->dodge_challenger->height();
    ui->dodge_challenger->setPixmap(Dodge.scaled(dodge_w, dodge_h, Qt::KeepAspectRatio));

    //Lamborghini Urus
    QPixmap lamb2(":/img/pictures/lamborghini_urus-2.jpg");
    int lamb2_w = ui->lamborghini_urus->width();
    int lamb2_h = ui->lamborghini_urus->height();
    ui->lamborghini_urus->setPixmap(lamb2.scaled(lamb2_w, lamb2_h, Qt::KeepAspectRatio));

    //Lixiang L9
    QPixmap lixiang1(":/img/pictures/lixiang_l9-2.jpg");
    int lixiang1_w = ui->lixiang_L9->width();
    int lixiang1_h = ui->lixiang_L9->height();
    ui->lixiang_L9->setPixmap(lixiang1.scaled(lixiang1_w, lixiang1_h, Qt::KeepAspectRatio));

    //Mercedes Maybach
    QPixmap mercedes2(":/img/pictures/mercedes_maybach-2.jpg");
    int mercedes2_w = ui->mercedes_maybach->width();
    int mercedes2_h = ui->mercedes_maybach->height();
    ui->mercedes_maybach->setPixmap(mercedes2.scaled(mercedes2_w, mercedes2_h, Qt::KeepAspectRatio));

    //Porsche 718
    QPixmap porsche1(":/img/pictures/Porsche_718-2.jpg");
    int porsche1_w = ui->porsche_718->width();
    int porsche1_h = ui->porsche_718->height();
    ui->porsche_718->setPixmap(porsche1.scaled(porsche1_w, porsche1_h, Qt::KeepAspectRatio));

    //Porsche Macan
    QPixmap porsche2(":/img/pictures/Porsche_macan-2.jpg");
    int porsche2_w = ui->porsche_macan->width();
    int porsche2_h = ui->porsche_macan->height();
    ui->porsche_macan->setPixmap(porsche2.scaled(porsche2_w, porsche2_h, Qt::KeepAspectRatio));


}

Catalog::~Catalog()
{
    delete ui;
}

void Catalog::on_pushButton_clicked()
{
    this->close();
    emit mainWindow();

}


void Catalog::on_pushButton_2_clicked()
{
    rent_auto.setWindowTitle("RentAuto");
    rent_auto.show();
    rent_auto.name = this->name;
    rent_auto.phone = this->phone;
}

