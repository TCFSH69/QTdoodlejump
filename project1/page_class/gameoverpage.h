#ifndef GAMEOVER_H
#define GAMEOVER_H

#include "../util/util.h"

class GameOverPage : public QMainWindow{
    Q_OBJECT
    public:
        GameOverPage(QWidget *parent);
        void mousePressEvent(QMouseEvent *event);
        void setScore(int score);

    private:
    	QPixmap gameOverBackgroundPixmap;
    	QLabel *gameOverBackgroundLabel;
    	QLabel *scoreLabel;
};
#endif