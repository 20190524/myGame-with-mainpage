#include"world.h"
#include"soldier.h"
#include<QMediaPlayer>
void World::show(QPainter *p){
    this->_s->show(p);
    this->_f->show(p);
}
void World::soldierMove(int step){
    this->_s->move(step);
}
void World::fireMove(int step){
    this->_f->move(step);
}
World::~World(){
    delete this->_s;
    delete this->_f;
}
void World::intWorld(){
    this->_s->setPosX(350);
    this->_s->setPosY(280);
    this->_f->setPosX(0);
    this->_f->setPosY(280);
}
