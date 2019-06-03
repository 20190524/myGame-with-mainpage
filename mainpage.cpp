#include"mainpage.h"
void MainPage::show(QPainter *p){
    QPixmap pix("://mymain.jpg");
    QPixmap npix=pix.scaled(,pix.height());
    p->drawPixmap(0,0,npix);
}
