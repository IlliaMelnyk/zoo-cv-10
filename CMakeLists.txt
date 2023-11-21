cmake_minimum_required(VERSION 3.26)
project(cv_9)

set(CMAKE_CXX_STANDARD 17)

add_executable(cv_9 main.cpp
        Weapon.cpp
        Weapon.h
        Spell.cpp
        Spell.h
        Hero.cpp
        Hero.h
        Hero.h
        HeroBuilder.cpp
        HeroBuilder.h
        MageBuilder.cpp
        MageBuilder.h
        WarriorBuilder.cpp
        WarriorBuilder.h
        HeroDirector.cpp
        HeroDirector.h
        HeroDirector.h)
