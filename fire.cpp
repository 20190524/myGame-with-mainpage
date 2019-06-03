#include"fire.h"
#include <QImage>
void Fire::show(QPainter *p){
    QImage ima(":/pic/fire.png");
    p->drawImage(_pos_x,_pos_y,ima,150,80,120,70);
}
void Fire::move(int step){
    _pos_x+=step;
}
int Fire::getNextX(){
    return _pos_x+1;
}
int Fire::getNextY(){
    return _pos_y;
}
