#include"background.h"
#include<QMediaPlayer>

void Music::play(){
    QMediaPlayer * player = new QMediaPlayer;
    player->setMedia(QUrl("qrc:/sound/footstep.mp3"));
    player->setVolume(30);
    player->play();
}
