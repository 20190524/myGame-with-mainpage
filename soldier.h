
#ifndef SOLDIER_H
#define SOLDIER_H
#include<QPainter>
#include<QImage>
#include <QMediaPlayer>
class Soldier
{
public:
    Soldier() {}
    void show(QPainter *p);
    void move(int step);
    int getNextX();
    int getNextY();
    void setPosX(int x){this->_pos_x=x;}
    void setPosY(int y){this->_pos_y=y;}
//    void onMove();
private:
    int _pos_x,_pos_y;
    bool _movable=true;
//    QImage _sp;
};
#endif // SOLDIER_H
