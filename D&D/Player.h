#include <iostream>
#include <string>
using namespace std;
#ifndef PLAYER_H
#define PLAYER_H



class Player {
public:
    Player() : hp(10), lp(100), race(""),name(""){};
    Player(int hp, int lp, string race, string name) : hp(hp), lp(lp), race(race),name(name){};
    ~Player(){}
    //seters y geters
    void setHp(int hp);
    int getHp();
    void setLp(int lp);
    int getLp();
    void setRace(string race);
    string getRace();
    void setName(string name);
    string getName();
    void display();


private:
    int hp, lp;
    string race, name; //lista de monstruos faltante
};



#endif //PLAYER_H
