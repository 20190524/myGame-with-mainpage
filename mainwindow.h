#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QPainter>
#include<QImage>
#include"soldier.h"
#include"fire.h"
#include"world.h"
#include<QTime>
#include<QTimer>
#include<mainpage.h>
#include <QMediaPlayer>
//#include<background.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
protected slots:
    void soldierMove();
    void fireMove();
private:
    Ui::MainWindow *ui;
    MainPage _page;
    World _game;
    QTimer *timer;
    bool _sign=false;
    bool _pagesign=true;
//    Music _mymu;
};

#endif // MAINWINDOW_H
