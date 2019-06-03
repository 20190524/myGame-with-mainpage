#ifndef MAINPAGE_H
#define MAINPAGE_H
#include<QPainter>
#include<QPixmap>
class MainPage
{
public:
    MainPage() {}
    void show(QPainter *p);
private:
    int _width,_height;
};
#endif // MAINPAGE_H
