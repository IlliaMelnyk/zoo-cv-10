//
// Created by xmelnyk on 21.11.2023.
//

#include "WarriorBuilder.h"
void WarriorBuilder::createHero(std::string name){
    m_hero=new Hero(name,"warrior",100);
}
void WarriorBuilder::addSpells(){

}
void WarriorBuilder::addWeapons(){
    m_hero->addWeapon(new Weapon("Steel armor",50));
    m_hero->addWeapon(new Weapon("Sword",100));
    m_hero->addWeapon(new Weapon("Axe",60));
}