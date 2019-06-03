#include"soldier.h"
#include<cmath>
#include <QMediaPlayer>
void Soldier::move(int step){
    this->_pos_x-=step;
    if(2*(_pos_x/2)==_pos_x)this->_pos_y+=step;
    else _pos_y-=step;
    QMediaPlayer * player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sound/footstep.mp3"));
    player->setVolume(30);
    player->play();
}
void Soldier::show(QPainter *p){
    QImage ima(":/pic/soldier.png");
//    this->_sp=ima.copy(QRect(150,80,120,70));
    p->drawImage(_pos_x,_pos_y,ima,150,80,120,70);//前两个改变位置，中间两个改变截图位置，后两个改变大小
//    p->drawImage(this->_pos_x,this->_pos_y,this->_sp);
}
int Soldier::getNextX(){
    return this->_pos_x-1;
}
int Soldier::getNextY(){
    return this->_pos_y;
}

