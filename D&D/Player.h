//
// Created by stanl on 29/10/2024.
//
#include <iostream>
#include <string>
using namespace std;
#ifndef PLAYER_H
#define PLAYER_H



class Player {
public:
    Player(int hp, int lp, string race, string name) : hp(10), lp(100), race(nullptr),name(nullptr){};
    ~Player();
    //seters y geters


private:
    int hp, lp;
    string race, name; //lista de monstruos faltante
};



#endif //PLAYER_H
