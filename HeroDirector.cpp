//
// Created by xmelnyk on 21.11.2023.
//

#include "HeroDirector.h"
HeroDirector::HeroDirector(HeroBuilder* builder){
    m_builder=builder;
}
Hero *HeroDirector:: createHero(string name){
    m_builder->createHero(name);
    m_builder->addWeapons();
    m_builder->addSpells();
    return m_builder->getHero();
}
void HeroDirector::setBuilder(HeroBuilder* builder){
    m_builder=builder;
}