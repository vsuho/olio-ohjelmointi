#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_btnCount_clicked()
{
    count++;
    QString s = QString::number(count);
    qDebug()<<"Nappia painettu";
    ui->leCount->setText(s);
}


void MainWindow::on_btnReset_clicked()
{
    count=0;
    QString s = QString::number(count);
    qDebug()<<"Nappia painettu";
    ui->leCount->setText(s);
}

