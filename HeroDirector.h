//
// Created by xmelnyk on 21.11.2023.
//

#ifndef CV_9_HERODIRECTOR_H
#define CV_9_HERODIRECTOR_H
#include "HeroBuilder.h"

class HeroDirector {
HeroBuilder* m_builder;
public:
    HeroDirector(HeroBuilder* builder);
    Hero * createHero(string name);
    void setBuilder(HeroBuilder* m_builder);
};


#endif //CV_9_HERODIRECTOR_H
