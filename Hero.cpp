//
// Created by xmelnyk on 21.11.2023.
//

#include "Hero.h"

Hero::Hero(string name,string role,int strength):Hero(name,role,strength,{},{}){
}
Hero::Hero(string name,string role,int strength,vector<Spell*> spells,vector<Weapon*> weapons){
    m_name=name;
    m_role=role;
    m_strength=strength;
    m_spells=spells;
    m_weapons=weapons;
}
void Hero::addSpell(Spell* spell){
        m_spells.push_back(spell);
}

void Hero::addWeapon(Weapon* weapon){
    m_weapons.push_back(weapon);
}
void Hero::print(){
cout<<"-------Hero------:"<<"/n"
      <<"Name: "<<m_name<<"/n"
      <<"Role: "<<m_role<<"/n"
      <<"Strength: "<<m_strength<<"/n"
      <<"Spells: "<<(m_spells.empty() ? "None": to_string(m_spells.size()))<<"/n"
      <<"Weapons: "<<m_weapons.size()<<endl;

     /* if(m_spells.empty()){
          cout<<"None";
      }else{
          std::cout<<m_spells.size();
      }*/
}