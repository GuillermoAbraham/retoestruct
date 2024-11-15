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
    void setHp(int hp);
    int getHp();
    void setLp(int lp);
    int getLp();
    void setRace(string race);
    string getRace();
    void setName(string name);
    string getName();


private:
    int hp, lp;
    string race, name; //lista de monstruos faltante
};



#endif //PLAYE
