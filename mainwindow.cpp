#include "mainwindow.h"
#include "ui_mainwindow.h"
int a=0,b=0,c=0,d=0,flag=0,cnt=0;
QString signn,result,str1,str2;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_clicked()
{
    if(flag==0){
    ui->lineEdit->text();
    ui->lineEdit->setText("1");
    c=ui->lineEdit->text().toInt();
    a=a*10+c;
    str1=QString::number(a);
    ui->lineEdit->setText(str1);

    }
    else
     {
        ui->lineEdit->text();
        ui->lineEdit->setText("1");
        d=ui->lineEdit->text().toInt();
        b=b*10+d;
        str2=QString::number(b);
        ui->lineEdit->setText(str2);
    }

}

void MainWindow::on_pushButton_2_clicked()
{
    if(flag==0){
    ui->lineEdit->text();
    ui->lineEdit->setText("2");
    c=ui->lineEdit->text().toInt();
    a=a*10+c;
    str1=QString::number(a);
    ui->lineEdit->setText(str1);
     }
    else
     {
        ui->lineEdit->text();
        ui->lineEdit->setText("2");
        d=ui->lineEdit->text().toInt();
        b=b*10+d;
        str2=QString::number(b);
        ui->lineEdit->setText(str2);
    }
}

void MainWindow::on_pushButton_3_clicked()
{
    if(flag==0){
    ui->lineEdit->text();
    ui->lineEdit->setText("3");
    c=ui->lineEdit->text().toInt();
    a=a*10+c;
    str1=QString::number(a);
    ui->lineEdit->setText(str1);
     }
    else
     {
        ui->lineEdit->text();
        ui->lineEdit->setText("3");
        d=ui->lineEdit->text().toInt();
        b=b*10+d;
        str2=QString::number(b);
        ui->lineEdit->setText(str2);
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    if(flag==0){
    ui->lineEdit->text();
    ui->lineEdit->setText("4");
    c=ui->lineEdit->text().toInt();
    a=a*10+c;
    str1=QString::number(a);
    ui->lineEdit->setText(str1);
     }
    else
     {
        ui->lineEdit->text();
        ui->lineEdit->setText("4");
        d=ui->lineEdit->text().toInt();
        b=b*10+d;
        str2=QString::number(b);
        ui->lineEdit->setText(str2);
    }
}

void MainWindow::on_pushButton_5_clicked()
{if(flag==0){
        ui->lineEdit->text();
        ui->lineEdit->setText("5");
        c=ui->lineEdit->text().toInt();
        a=a*10+c;
        str1=QString::number(a);
        ui->lineEdit->setText(str1);
         }
        else
         {
            ui->lineEdit->text();
            ui->lineEdit->setText("5");
            d=ui->lineEdit->text().toInt();
            b=b*10+d;
            str2=QString::number(b);
            ui->lineEdit->setText(str2);
        }
}

void MainWindow::on_pushButton_6_clicked()
{if(flag==0){
        ui->lineEdit->text();
        ui->lineEdit->setText("6");
        c=ui->lineEdit->text().toInt();
        a=a*10+c;
        str1=QString::number(a);
        ui->lineEdit->setText(str1);
         }
        else
         {
            ui->lineEdit->text();
            ui->lineEdit->setText("6");
            d=ui->lineEdit->text().toInt();
            b=b*10+d;
            str2=QString::number(b);
            ui->lineEdit->setText(str2);
        }
}

void MainWindow::on_pushButton_7_clicked()
{if(flag==0){
        ui->lineEdit->text();
        ui->lineEdit->setText("7");
        c=ui->lineEdit->text().toInt();
        a=a*10+c;
        str1=QString::number(a);
        ui->lineEdit->setText(str1);
         }
        else
         {
            ui->lineEdit->text();
            ui->lineEdit->setText("7");
            d=ui->lineEdit->text().toInt();
            b=b*10+d;
            str2=QString::number(b);
            ui->lineEdit->setText(str2);
        }
}

void MainWindow::on_pushButton_8_clicked()
{if(flag==0){
        ui->lineEdit->text();
        ui->lineEdit->setText("8");
        c=ui->lineEdit->text().toInt();
        a=a*10+c;
        str1=QString::number(a);
        ui->lineEdit->setText(str1);
         }
        else
         {
            ui->lineEdit->text();
            ui->lineEdit->setText("8");
            d=ui->lineEdit->text().toInt();
            b=b*10+d;
            str2=QString::number(b);
            ui->lineEdit->setText(str2);
        }
}

void MainWindow::on_pushButton_9_clicked()
{if(flag==0){
        ui->lineEdit->text();
       ui->lineEdit->setText("9");
        c=ui->lineEdit->text().toInt();
        a=a*10+c;
        str1=QString::number(a);
        ui->lineEdit->setText(str1);
         }
        else
         {
            ui->lineEdit->text();
            ui->lineEdit->setText("9");
            d=ui->lineEdit->text().toInt();
            b=b*10+d;
            str2=QString::number(b);
            ui->lineEdit->setText(str2);
        }
}

void MainWindow::on_pushButton_11_clicked()
{if(flag==0){
        ui->lineEdit->text();
        ui->lineEdit->setText("0");
        c=ui->lineEdit->text().toInt();
        a=a*10+c;
        str1=QString::number(a);
        ui->lineEdit->setText(str1);
         }
        else
         {
            ui->lineEdit->text();
            ui->lineEdit->setText("0");
            d=ui->lineEdit->text().toInt();
            b=b*10+d;
            str2=QString::number(b);
            ui->lineEdit->setText(str2);
        }
}

void MainWindow::on_pushButton_10_clicked()//addition
{
    flag=1;
    ui->lineEdit->text();
    ui->lineEdit->setText("+");
    signn=ui->lineEdit->text();
}

void MainWindow::on_pushButton_13_clicked()//subtraction
{
    flag=1;
    ui->lineEdit->text();
    ui->lineEdit->setText("-");
    signn=ui->lineEdit->text();
}

void MainWindow::on_pushButton_14_clicked()//multi
{
    flag=1;
    ui->lineEdit->text();
    ui->lineEdit->setText("*");
    signn=ui->lineEdit->text();
}

void MainWindow::on_pushButton_15_clicked()//divid
{
    flag=1;
    ui->lineEdit->text();
    ui->lineEdit->setText("/");
    signn=ui->lineEdit->text();
}

void MainWindow::on_pushButton_16_clicked()
{
    flag=0;
    a=b=c=d=0;
    str1="\0";
    str2="\0";
    ui->lineEdit->clear();

}

void MainWindow::on_pushButton_12_clicked()
{
    if(!(QString::compare(signn,"+")))
      { result=QString::number(a+b);  ui->lineEdit->setText(result);}
    if(!(QString::compare(signn,"-")))
      {result=QString::number(a-b);   ui->lineEdit->setText(result);}

    if(!(QString::compare(signn,"*")))
       {result=QString::number(a*b);  ui->lineEdit->setText(result);}

    if(!(QString::compare(signn,"/")))
       {result=QString::number(a/b);  ui->lineEdit->setText(result);}

}
