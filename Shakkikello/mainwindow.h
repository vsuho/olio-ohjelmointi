#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

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



public slots:
    void timeout();



private slots:
    void on_btnSwitch1_clicked();

    void on_btnSwitch2_clicked();

    void on_btn120s_clicked();

    void on_btn5min_clicked();

    void on_btnSTART_clicked();

    void on_btnSTOP_clicked();

    void slotShowTimer();

private:
    Ui::MainWindow *ui;
    QTimer * pQTimer;

    short aika=0;

    short player1Time;
    short player2Time;
    short currentPlayer;
    short gameTime;


    void updateProgressBar();
    void setGameInfoText(QString text, short value);

};
#endif // MAINWINDOW_H
