#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTime>
#include<QTimer>
#include<QMouseEvent>
#include<QPixmap>
#include <QMediaPlayer>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _game.intWorld();
//    _mymu.play();
    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(soldierMove()));
    timer->start(50);
    timer->setInterval(500);
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));


    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(fireMove()));
    timer->start(50);
    timer->setInterval(500);
    qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::paintEvent(QPaintEvent *event){       //画图
    /*QPainter *p;
    p=new QPainter();
    p->begin(this);
    this->_page.show(p);
    p->end();
    delete p;*/
    if(_pagesign==true){
        QPainter p(this);
        p.drawPixmap(0,0,this->width(),this->height(),QPixmap(":/pic/mymain.jpg"));
    }
    if(_sign==true){
        QPainter *p1;
        p1=new QPainter();
        p1->begin(this);
        this->_game.show(p1);
        p1->end();
        delete p1;
    }
}
void MainWindow::mousePressEvent(QMouseEvent *event){
    if(event->button()==Qt::LeftButton){
        _sign=true;
        _pagesign=false;
    }
}
void MainWindow::soldierMove(){
    this->_game.soldierMove(1);
    this->repaint();
}
void MainWindow::fireMove(){
    this->_game.fireMove(1);
    this->repaint();
}
