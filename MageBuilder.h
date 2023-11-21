//
// Created by xmelnyk on 21.11.2023.
//

#ifndef CV_9_MAGEBUILDER_H
#define CV_9_MAGEBUILDER_H
#include "HeroBuilder.h"

class MageBuilder : public HeroBuilder{
public:
    void createHero(string name) override;
    void addSpells() override;
    void addWeapons() override;
};


#endif //CV_9_MAGEBUILDER_H
