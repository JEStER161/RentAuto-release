#include "firstwindow.h"
#include "ui_firstwindow.h"

FirstWindow::FirstWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::FirstWindow)
{
    ui->setupUi(this);

}

FirstWindow::~FirstWindow()
{
    delete ui;
}



void FirstWindow::on_comboBox_activated(int index)
{
    {
        QSqlDatabase db;
        db = QSqlDatabase::addDatabase("QSQLITE", "db_car");
        db.setDatabaseName("./users_DB.db");
        if(db.open()){
            qDebug("open rentwindow");
        }
        else{
            qDebug("no open");
        }
        QSqlQuery query(db);

        if(query.exec("CREATE TABLE Cars(Cars_name TEXT, Price TEXT, Rent TEXT, Name_tenant TEXT, Phone_tenant TEXT, First_day TEXT, Last_day TEXT);")){
            query.prepare("INSERT INTO Cars(Cars_name, Price) VALUES(:name, :price);");
            query.bindValue(":name","BMW M5 Competition");
            query.bindValue(":price", "40000");
            query.exec();


            query.prepare("INSERT INTO Cars(Cars_name, Price) VALUES(:name, :price);");
            query.bindValue(":name","Lamborghini Huracan Perfomante");
            query.bindValue(":price", "110000");
            query.exec();

            query.prepare("INSERT INTO Cars(Cars_name, Price) VALUES(:name, :price);");
            query.bindValue(":name","Bentley Continental GT W12");
            query.bindValue(":price", "65000");
            query.exec();

            query.prepare("INSERT INTO Cars(Cars_name, Price) VALUES(:name, :price);");
            query.bindValue(":name","Mercedes G63 AMG");
            query.bindValue(":price", "59000");
            query.exec();

            query.prepare("INSERT INTO Cars(Cars_name, Price) VALUES(:name, :price);");
            query.bindValue(":name","Rolls Royce Wraith");
            query.bindValue(":price", "80000");
            query.exec();

            query.prepare("INSERT INTO Cars(Cars_name, Price) VALUES(:name, :price);");
            query.bindValue(":name","Zeekr 001");
            query.bindValue(":price", "23000");
            query.exec();

            query.prepare("INSERT INTO Cars(Cars_name, Price) VALUES(:name, :price);");
            query.bindValue(":name","Audi A5 Sportback");
            query.bindValue(":price", "11500");
            query.exec();

            query.prepare("INSERT INTO Cars(Cars_name, Price) VALUES(:name, :price);");
            query.bindValue(":name","BMW M3 Competition");
            query.bindValue(":price", "39000");
            query.exec();

            query.prepare("INSERT INTO Cars(Cars_name, Price) VALUES(:name, :price);");
            query.bindValue(":name","BMW M8 Competition");
            query.bindValue(":price", "49000");
            query.exec();

            query.prepare("INSERT INTO Cars(Cars_name, Price) VALUES(:name, :price);");
            query.bindValue(":name","BMW XM");
            query.bindValue(":price", "65000");
            query.exec();

            query.prepare("INSERT INTO Cars(Cars_name, Price) VALUES(:name, :price);");
            query.bindValue(":name","BMW Z4 M40i");
            query.bindValue(":price", "30000");
            query.exec();

            query.prepare("INSERT INTO Cars(Cars_name, Price) VALUES(:name, :price);");
            query.bindValue(":name","Chevrolet Camaro");
            query.bindValue(":price", "16600");
            query.exec();

            query.prepare("INSERT INTO Cars(Cars_name, Price) VALUES(:name, :price);");
            query.bindValue(":name","Dodge Challenger III R/T");
            query.bindValue(":price", "29000");
            query.exec();

            query.prepare("INSERT INTO Cars(Cars_name, Price) VALUES(:name, :price);");
            query.bindValue(":name","Lamborghini Urus");
            query.bindValue(":price", "79000");
            query.exec();

            query.prepare("INSERT INTO Cars(Cars_name, Price) VALUES(:name, :price);");
            query.bindValue(":name","Lixiang L9");
            query.bindValue(":price", "28000");
            query.exec();

            query.prepare("INSERT INTO Cars(Cars_name, Price) VALUES(:name, :price);");
            query.bindValue(":name","Mercedes Maybach S680");
            query.bindValue(":price", "80000");
            query.exec();

            query.prepare("INSERT INTO Cars(Cars_name, Price) VALUES(:name, :price);");
            query.bindValue(":name","Porsche 718 Boxster S");
            query.bindValue(":price", "34000");
            query.exec();

            query.prepare("INSERT INTO Cars(Cars_name, Price) VALUES(:name, :price);");
            query.bindValue(":name","Porsche Macan");
            query.bindValue(":price", "15900");
            query.exec();
        }

        if(index == 0){
            ui->label_2->setStyleSheet("image: url(:/img/pictures/bmw_m5_competition_2.jpg);");
            query.prepare("SELECT Price FROM Cars WHERE Cars_name = :name");
            query.bindValue(":name", "BMW M5 Competition");
            query.exec();
            query.next();
            cost_all = query.value(0).toInt();
            take_car = "BMW M5 Competition";
        }
        else if(index == 1){
            ui->label_2->setStyleSheet("image: url(:/img/pictures/lamborghini_huracan-2.jpg);");
            query.prepare("SELECT Price FROM Cars WHERE Cars_name = :name");
            query.bindValue(":name", "Lamborghini Huracan Perfomante");
            query.exec();
            query.next();
            cost_all = query.value(0).toInt();
            take_car = "Lamborghini Huracan Perfomante";
        }
        else if(index == 2){
            ui->label_2->setStyleSheet("image: url(:/img/pictures/Bentley_Continental-2.jpg);");
            query.prepare("SELECT Price FROM Cars WHERE Cars_name = :name");
            query.bindValue(":name", "Bentley Continental GT W12");
            query.exec();
            query.next();
            cost_all = query.value(0).toInt();
            take_car = "Bentley Continental GT W12";
        }
        else if(index == 3){
            ui->label_2->setStyleSheet("image: url(:/img/pictures/Mercedes_g63_amg_2.jpg);");
            query.prepare("SELECT Price FROM Cars WHERE Cars_name = :name");
            query.bindValue(":name", "Mercedes G63 AMG");
            query.exec();
            query.next();
            cost_all = query.value(0).toInt();
            take_car = "Mercedes G63 AMG";
        }
        else if(index == 4){
            ui->label_2->setStyleSheet("image: url(:/img/pictures/Rolls_Royce_Wraith-2.jpg);");
            query.prepare("SELECT Price FROM Cars WHERE Cars_name = :name");
            query.bindValue(":name", "Rolls Royce Wraith");
            query.exec();
            query.next();
            cost_all = query.value(0).toInt();
            take_car = "Rolls Royce Wraith";
        }
        else if(index == 5){
            ui->label_2->setStyleSheet("image: url(:/img/pictures/Zeekr_001_2.jpg);");
            query.prepare("SELECT Price FROM Cars WHERE Cars_name = :name");
            query.bindValue(":name", "Zeekr 001");
            query.exec();
            query.next();
            cost_all = query.value(0).toInt();
            take_car = "Zeekr 001";
        }
        else if(index == 6){
            ui->label_2->setStyleSheet("image: url(:/img/pictures/audi_a5-2.jpg);");
            query.prepare("SELECT Price FROM Cars WHERE Cars_name = :name");
            query.bindValue(":name", "Audi A5 Sportback");
            query.exec();
            query.next();
            cost_all = query.value(0).toInt();
            take_car = "Audi A5 Sportback";
        }
        else if(index == 7){
            ui->label_2->setStyleSheet("image: url(:/img/pictures/bmw_m3-2.jpg);");
            query.prepare("SELECT Price FROM Cars WHERE Cars_name = :name");
            query.bindValue(":name", "BMW M3 Competition");
            query.exec();
            query.next();
            cost_all = query.value(0).toInt();
            take_car = "BMW M3 Competition";
        }
        else if(index == 8){
            ui->label_2->setStyleSheet("image: url(:/img/pictures/bmw_m8-2.jpg);");
            query.prepare("SELECT Price FROM Cars WHERE Cars_name = :name");
            query.bindValue(":name", "BMW M8 Competition");
            query.exec();
            query.next();
            cost_all = query.value(0).toInt();
            take_car = "BMW M8 Competition";
        }
        else if(index == 9){
            ui->label_2->setStyleSheet("image: url(:/img/pictures/bmw_xm-2.jpg);");
            query.prepare("SELECT Price FROM Cars WHERE Cars_name = :name");
            query.bindValue(":name", "BMW XM");
            query.exec();
            query.next();
            cost_all = query.value(0).toInt();
            take_car = "BMW XM";
        }
        else if(index == 10){
            ui->label_2->setStyleSheet("image: url(:/img/pictures/bmw_z4-2.jpg);");
            query.prepare("SELECT Price FROM Cars WHERE Cars_name = :name");
            query.bindValue(":name", "BMW Z4 M40i");
            query.exec();
            query.next();
            cost_all = query.value(0).toInt();
            take_car = "BMW Z4 M40i";
        }
        else if(index == 11){
            ui->label_2->setStyleSheet("image: url(:/img/pictures/camaro-2.jpg);");
            query.prepare("SELECT Price FROM Cars WHERE Cars_name = :name");
            query.bindValue(":name", "Chevrolet Camaro");
            query.exec();
            query.next();
            cost_all = query.value(0).toInt();
            take_car = "Chevrolet Camaro";
        }
        else if(index == 12){
            ui->label_2->setStyleSheet("image: url(:/img/pictures/Dodge_challenger-2.jpg);");
            query.prepare("SELECT Price FROM Cars WHERE Cars_name = :name");
            query.bindValue(":name", "Dodge Challenger III R/T");
            query.exec();
            query.next();
            cost_all = query.value(0).toInt();
            take_car = "Dodge Challenger III R/T";
        }
        else if(index == 13){
            ui->label_2->setStyleSheet("image: url(:/img/pictures/lamborghini_urus-2.jpg);");
            query.prepare("SELECT Price FROM Cars WHERE Cars_name = :name");
            query.bindValue(":name", "Lamborghini Urus");
            query.exec();
            query.next();
            cost_all = query.value(0).toInt();
            take_car = "Lamborghini Urus";
        }
        else if(index == 14){
            ui->label_2->setStyleSheet("image: url(:/img/pictures/lixiang_l9-2.jpg);");
            query.prepare("SELECT Price FROM Cars WHERE Cars_name = :name");
            query.bindValue(":name", "Lixiang L9");
            query.exec();
            query.next();
            cost_all = query.value(0).toInt();
            take_car = "Lixiang L9";
        }
        else if(index == 15){
            ui->label_2->setStyleSheet("image: url(:/img/pictures/mercedes_maybach-2.jpg);");
            query.prepare("SELECT Price FROM Cars WHERE Cars_name = :name");
            query.bindValue(":name", "Mercedes Maybach S680");
            query.exec();
            query.next();
            cost_all = query.value(0).toInt();
            take_car = "Mercedes Maybach S680";
        }
        else if(index == 16){
            ui->label_2->setStyleSheet("image: url(:/img/pictures/Porsche_718-2.jpg);");
            query.prepare("SELECT Price FROM Cars WHERE Cars_name = :name");
            query.bindValue(":name", "Porsche 718 Boxster S");
            query.exec();
            query.next();
            cost_all = query.value(0).toInt();
            take_car = "Porsche 718 Boxster S";
        }
        else if(index == 17){
            ui->label_2->setStyleSheet("image: url(:/img/pictures/Porsche_macan-2.jpg);");
            query.prepare("SELECT Price FROM Cars WHERE Cars_name = :name");
            query.bindValue(":name", "Porsche Macan");
            query.exec();
            query.next();
            cost_all = query.value(0).toInt();
            take_car = "Porsche Macan";
        }

        first_day = ui->from->date().toJulianDay();
        last_day = ui->to->date().toJulianDay();
        total_days = last_day - first_day;

        int a = cost_all * total_days;
        if(a > 0){
        ui->cost->setText("Стоимость: " + QString::number(a) + " ₽");
        }
        else{
            ui->cost->setText("Вы выбрали неправильную дату");
        }
        db.close();
    }
    QSqlDatabase::removeDatabase("db_car");


}


void FirstWindow::on_pushButton_clicked()
{
    {
        QSqlDatabase db;
        db = QSqlDatabase::addDatabase("QSQLITE", "db_car");
        db.setDatabaseName("./users_DB.db");
        if(db.open()){
            qDebug("open rentwindow");
        }
        else{
            qDebug("no open");
        }
        QSqlQuery query(db);

        query.prepare("SELECT First_day, Last_day FROM Cars WHERE Cars_name = :cars_name");
        query.bindValue(":cars_name", take_car);
        query.exec();
        query.next();
        int first = query.value(0).toDate().toJulianDay();
        int last = query.value(1).toDate().toJulianDay();
        qDebug() << first << last << take_car;
        if(first_day < last_day and ((first_day < first and last_day < first) or (first_day > last and last_day > last))){
            query.prepare("UPDATE Cars SET Rent = :rent, First_day = :first, Last_day = :last,  Name_tenant = :tenant, Phone_tenant = :phone WHERE Cars_name = :name");
            query.bindValue(":rent", "booked");
            query.bindValue(":first", ui->from->date());
            query.bindValue(":last", ui->to->date());
            query.bindValue(":tenant", this->name);
            query.bindValue(":phone", this->phone);
            query.bindValue(":name", take_car);
            query.exec();
            QMessageBox::information(this, "", "Ваша заявка на аренду авто зарегистрирована. В ближайшее время с Вами свяжется менеджер.");
        }
        else{
            query.prepare("SELECT First_day, Last_day FROM Cars WHERE Cars_name = :cars_name");
            query.bindValue(":cars_name", take_car);
            query.exec();
            query.next();
            QString f = query.value(0).toString();
            QString l = query.value(1).toString();
            QMessageBox::warning(this, "", "Эта машина забронирована с " + f + " по " + l + ".Вы можете выбрать другую машину, либо забронировать эту на свободную дату.");
        }
        db.close();
    }
    QSqlDatabase::removeDatabase("db_car");
}


void FirstWindow::on_admin_clicked()
{
    adm = new login_for_cars_bd();
    adm->setWindowTitle("RentAuto");
    adm->show();
}


void FirstWindow::on_pushButton_2_clicked()
{
    this->close();
}

