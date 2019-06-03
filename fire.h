#ifndef FIRE_H
#define FIRE_H
#include<QPainter>

class Fire
{
public:
    Fire() {}
    void show(QPainter *p);
    void move(int step);
    int getNextX();
    int getNextY();
    void setPosX(int x){this->_pos_x=x;}
    void setPosY(int y){this->_pos_y=y;}
private:
    int _pos_x,_pos_y;
};
#endif // FIRE_H
