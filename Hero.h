//
// Created by xmelnyk on 21.11.2023.
//

#ifndef CV_9_HERO_H
#define CV_9_HERO_H
#include <iostream>
using namespace std;
#include <vector>
#include "Weapon.h"
#include "Spell.h"
class Hero {
string m_name;
int m_strength;
string m_role;
vector<Weapon *> m_weapons;
vector<Spell *> m_spells;
public:
    Hero(string name,string role,int strength);
    Hero(string name,string role,int strength,vector<Spell*> spells ,vector<Weapon*> weapons);
    void addSpell(Spell* spell);
    void addWeapon(Weapon* weapon);
    void print();
};


#endif //CV_9_HERO_H
