#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H

#include "../page_class/gameclass/platform.h"
#include "../page_class/gameclass/item.h"
#include "../page_class/gameclass/monster.h"

typedef struct GameObject{
    Platform* platform;
    Item* item;
    Monster* monster;
    int absoluteHeight;

    GameObject(Platform* platform, Item* item, Monster* monster, int absoluteHeight){
        this->platform = platform;
        this->item = item;
        this->monster = monster;
        this->absoluteHeight = absoluteHeight;
    }

}GameObject;

#endif