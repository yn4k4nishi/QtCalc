#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lcdNumber_overflow(){}

void MainWindow::on_pushButton_clicked()
{
    a = a*10 + 9;
    ui->lcdNumber->display(a) ;
}

void MainWindow::on_pushButton_2_clicked()
{
    a = a*10 + 8;
    ui->lcdNumber->display(a) ;
}

void MainWindow::on_pushButton_3_clicked()
{
    a = a*10 + 7;
    ui->lcdNumber->display(a) ;
}

void MainWindow::on_pushButton_5_clicked()
{
    a = a*10 + 6;
    ui->lcdNumber->display(a) ;
}

void MainWindow::on_pushButton_8_clicked()
{
    a = a*10 + 5;
    ui->lcdNumber->display(a) ;
}

void MainWindow::on_pushButton_6_clicked()
{
    a = a*10 + 4;
    ui->lcdNumber->display(a) ;
}

void MainWindow::on_pushButton_9_clicked()
{
    a = a*10 + 3;
    ui->lcdNumber->display(a) ;
}

void MainWindow::on_pushButton_15_clicked()
{
    a = a*10 + 2;
    ui->lcdNumber->display(a) ;
}

void MainWindow::on_pushButton_11_clicked()
{
    a = a*10 + 1;
    ui->lcdNumber->display(a) ;
}

void MainWindow::on_pushButton_10_clicked()
{
    a = a*10 + 0;
    ui->lcdNumber->display(a) ;
}

void MainWindow::on_pushButton_4_clicked()
{
    ope = Ope::Add;
    b = a;
    a = 0;
    ui->lcdNumber->display(a) ;
}

void MainWindow::on_pushButton_7_clicked()
{
    ope = Ope::Sub;
    b = a;
    a = 0;
    ui->lcdNumber->display(a) ;
}

void MainWindow::on_pushButton_13_clicked()
{
    ope = Ope::Mult;
    b = a;
    a = 0;
    ui->lcdNumber->display(a) ;
}

void MainWindow::on_pushButton_12_clicked()
{
    ope = Ope::Div;
    b = a;
    a = 0;
    ui->lcdNumber->display(a) ;
}

void MainWindow::on_pushButton_14_clicked()
{
    switch (ope) {
    case Ope::Add:
        a = b + a;
        break;
    case Ope::Sub:
        a = b - a;
        break;
    case Ope::Mult:
        a = b * a;
        break;
    case Ope::Div:
        a = b / a;
        break;
    }
    b = 0;
    ui->lcdNumber->display(a);
}

void MainWindow::on_pushButton_17_clicked()
{
    a = 0;
    b = 0;
    ui->lcdNumber->display(a);
}
