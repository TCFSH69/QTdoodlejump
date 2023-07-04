#include "gameoverpage.h"

GameOverPage::GameOverPage(QWidget *parent) : QMainWindow(parent){
	gameOverBackgroundPixmap.load("./dataset/images/background.png");
	gameOverBackgroundLabel = Util::createImageLabel(gameOverBackgroundPixmap, this);
	scoreLabel = new QLabel(this);
    scoreLabel->setFixedSize(WINDOW_WIDTH, 400);
    scoreLabel->setGeometry(WINDOW_WIDTH / 3, WINDOW_HEIGHT / 2, WINDOW_WIDTH, 200);
    scoreLabel->setFont(QFont("Arial", 30, QFont::Bold));
    scoreLabel->raise();
    scoreLabel->show();
}

void GameOverPage::setScore(int score){
    scoreLabel->setText(QString("Score: %1").arg(QString::number(score)));
}

void GameOverPage::mousePressEvent(QMouseEvent *event){
    if (event->button() == Qt::LeftButton){
        std::cout << "game over\n";
        QCoreApplication::quit();
    }
}