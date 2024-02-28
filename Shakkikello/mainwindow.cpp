#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pQTimer = new QTimer();

    ui->progressBar->setValue(0);
    ui->progressBar_2->setValue(0);
    player1Time = 0;
    player2Time = 0;
    gameTime = 0;

    ui->text->setText("Select playtime and press start game!");


}

MainWindow::~MainWindow()
{
    delete ui;
    delete pQTimer;
}

void MainWindow::timeout()
{
    updateProgressBar();


}

void MainWindow::updateProgressBar()

{


        // Lasketaan prosenteiksi playerTimen ja gameTimen osamäärä
        double progressBar1 = static_cast<double>(player1Time)/gameTime * 100;
        double progressBar2 = static_cast<double>(player2Time)/gameTime * 100;

        // Asetetaan arvot progressBareihin
        ui->progressBar->setValue(static_cast<int>(progressBar1));
        ui->progressBar_2->setValue(static_cast<int>(progressBar2));

}


void MainWindow::setGameInfoText(QString text, short value)
{
    ui->text->setText(text);
}

void MainWindow::on_btnSwitch1_clicked()
{
    currentPlayer = 2;
}


void MainWindow::on_btnSwitch2_clicked()
{
    currentPlayer = 1;
}


void MainWindow::on_btn120s_clicked()
{

    currentPlayer = 1;

    ui->text->setText("Ready to play");

    // 120s mukaan arvot
    gameTime = 120;
    player1Time = 120;
    player2Time = 120;




}


void MainWindow::on_btn5min_clicked()
{

    currentPlayer = 1;

    ui->text->setText("Ready to play");

    // 5 minuutin mukaan arvot
    gameTime = 300;
    player1Time = 300;
    player2Time = 300;



}


void MainWindow::on_btnSTART_clicked()
{
    currentPlayer = 1;

    disconnect(pQTimer, SIGNAL(timeout()), nullptr, nullptr);       // Jotta timer ei jää päälle edelliseltä kerralta


    player1Time = gameTime;
    player2Time = gameTime;

    connect(pQTimer, SIGNAL(timeout()), this, SLOT(slotShowTimer()));
    pQTimer->start(1000);

    ui->text->setText("Game ongoing");

}


void MainWindow::on_btnSTOP_clicked()
{

    player1Time = 0;
    player2Time = 0;
    gameTime = 0;

    ui->progressBar->setValue(0);
    ui->progressBar_2->setValue(0);

    ui->text->setText("Start new game via select playtime");

    pQTimer->stop();


}

void MainWindow::slotShowTimer()
{

   // qDebug()<<player1Time<<"sekuntia";


    // Jos pelaaja 1 vuoro ja playerTime on yli nolla
    if (currentPlayer == 1 && player1Time > 0)
    {
        player1Time--;;

        if (player1Time == 0)   // Jos nolla, labeliin teksti PLAYER X WON ja timer pysäytetään
        {
            ui->text->setText("PLAYER 2 WON!");
            pQTimer->stop();
        }
    }
    else if (currentPlayer == 2 && player2Time > 0)
    {
        player2Time--;

        if (player2Time == 0)
        {
            ui->text->setText("PLAYER 1 WON!");
            pQTimer->stop();
        }
    }

    updateProgressBar();

}

