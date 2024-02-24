#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Alustetaan tila 0, jotta ensimmäiset arvot asetetaan leNum1 kenttään
    state = 0;

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnNum1_clicked()
{
    numberClickedHandler();
   // qDebug()<<"1 painettu";
}


void MainWindow::on_btnNum2_clicked()
{
    numberClickedHandler();
   // qDebug()<<"2 painettu";
}


void MainWindow::on_btnNum3_clicked()
{
    numberClickedHandler();
   // qDebug()<<"3 painettu";
}


void MainWindow::on_btnNum4_clicked()
{
    numberClickedHandler();
   // qDebug()<<"4 painettu";
}


void MainWindow::on_btnNum5_clicked()
{
    numberClickedHandler();
   // qDebug()<<"5 painettu";
}


void MainWindow::on_btnNum6_clicked()
{
    numberClickedHandler();
   // qDebug()<<"6 painettu";
}


void MainWindow::on_btnNum7_clicked()
{
    numberClickedHandler();
   // qDebug()<<"7 painettu";
}


void MainWindow::on_btnNum8_clicked()
{
    numberClickedHandler();
   // qDebug()<<"8 painettu";
}


void MainWindow::on_btnNum9_clicked()
{
    numberClickedHandler();
   // qDebug()<<"9 painettu";
}


void MainWindow::on_btnNum0_clicked()
{
    numberClickedHandler();
   // qDebug()<<"0 painettu";
}


void MainWindow::on_btnClear_clicked()
{
    clearAndEnterClickHandler();
}


void MainWindow::on_btnEnter_clicked()
{
    clearAndEnterClickHandler();
}


void MainWindow::on_btnDiv_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_btnMul_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_btnSub_clicked()
{
    addSubMulDivClickHandler();
}


void MainWindow::on_btnAdd_clicked()
{
    addSubMulDivClickHandler();
}

// Yleiset handlerit, joita käytetään

void MainWindow::numberClickedHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString number = button->text();
   // qDebug() << "Button name: " << number;


    if(state == 0)
    {
        number1.append(number);
        ui->leNum1->setText(number1);
    }


    else if(state == 1)
    {
        number2.append(number);
       ui->leNum2->setText(number2);
    }

}

void MainWindow::clearAndEnterClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString number = button->text();

    if (button->text() == "clear")
    {
        resetLineEdits();        
    }

    // Tuloksen näyttäminen

    else if (button->text() == "enter")
    {
        float n1 = number1.toFloat();
        float n2 = number2.toFloat();
      //  qDebug()<< n1 << n2;

        float result = 0;

        switch(operand)
        {
        case 0:
            result = n1 + n2;
            break;
        case 1:
            result = n1 - n2;
            break;
        case 2:
            result = n1 * n2;
            break;
        case 3:
            result = n1 / n2;
            break;
        }

        ui->leResult->setText(QString::number(result));
    }

}

void MainWindow::addSubMulDivClickHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());

    if (button->text() == "+")
    {
        operand = 0;
    }
    else if (button->text() == "-")
    {
        operand = 1;
    }
    else if (button->text() == "*")
    {
        operand = 2;
    }
    else if (button->text() == "/")
    {
        operand = 3;
    }

    state = 1;


}


void MainWindow::resetLineEdits()
{

    //Käytetään valmista clear-funktiota

    ui->leNum1->clear();
    ui->leNum2->clear();
    ui->leResult->clear();

    number1.clear();
    number2.clear();

    state = 0;
}



