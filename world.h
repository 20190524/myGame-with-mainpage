#ifndef WORLD_H
#define WORLD_H
#include<QPainter>
#include <QMediaPlayer>
#include"soldier.h"
#include"fire.h"
class World
{
public:
    World() {this->_s=new Soldier;}
    ~World();
    void intWorld();
    void show(QPainter *p);
    void soldierMove(int step);
    void fireMove(int step);
private:
    Soldier *_s;
    Fire *_f;
};
#endif // WORLD_H
