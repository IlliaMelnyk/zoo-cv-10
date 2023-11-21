//
// Created by xmelnyk on 21.11.2023.
//

#ifndef CV_9_HEROBUILDER_H
#define CV_9_HEROBUILDER_H
#include "Hero.h"

class HeroBuilder {
protected:
    Hero* m_hero;
public:
    HeroBuilder();
    virtual void addSpells()=0;
    virtual void addWeapons()=0;
    virtual void createHero(string name)=0;
    Hero* getHero();

};


#endif //CV_9_HEROBUILDER_H
