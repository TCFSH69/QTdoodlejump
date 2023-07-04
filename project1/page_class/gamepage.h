#ifndef GAMEPAGE_H
#define GAMEPAGE_H

#include "gameclass/doodle.h"
#include "gameclass/bullet.h"
#include "gameoverpage.h"

class GamePage : public QMainWindow{
    Q_OBJECT
    public:
        GamePage(QWidget *parent);
        void gameStart();
        void mousePressEvent(QMouseEvent *event);
        void keyPressEvent(QKeyEvent *event);
        void keyReleaseEvent(QKeyEvent *event);
        void gameLoop();
        void resetView(Doodle *doodle);
        void generatePlatforms();
        QPair<int, int> platformRangeIdx(int rangeStart, int rangeEnd);
        void objectUpdate(Doodle *doodle);
        void appendBasicPlatform(int lastPlatformHeight);
        void updatePlatformVector();
        void replaceWithBrokenPlatforms(QPair<int, int> indexPair, int p);
        void replaceWithMovingOrVanishingPlatforms(QPair<int, int> indexPair, int platformKind, int p);
        void platformSubstitution(int index, int platformKind);
        void platformFrequencyManager();
        void itemGenerator();
        void monsterGenerator();
        void bulletUpdate();
        void hpUpdate();
        void checkIfGameOver();
        void print();
        QVector<GameObject*> gameObjectVector;
        QVector<Bullet*> bulletVector;

    private:
    	QPixmap gameBackgroundPixmap;
    	QLabel *gameBackgroundLabel;
        QLabel *scoreLabel;
        QPixmap hpPixmap;
        QLabel *hpLabel1;
        QLabel *hpLabel2;
        QLabel *hpLabel3;
    	QTimer *gameLoopTimer;
    	Doodle *doodle;

    	bool leftKeyPressed;
    	bool rightKeyPressed;
    	bool hasTouchedViewBaseLine;
    	int viewBaseline;
        int hp;
    	int score;
    	int brokenPlatformTargetScore;
    	int movingPlatformTargetScore;
    	int vanishingPlatformTargetScore;
        int itemGenerationTargetScore;
        int monsterGenerationTargetScore;
    	int absoluteHeight;
};
#endif