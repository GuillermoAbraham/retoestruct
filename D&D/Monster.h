//
// Created by stanl on 29/10/2024.
//
#include <iostream>
#include <string>
using namespace std;

#ifndef MONSTER_H
#define MONSTER_H



class Monster {
public:
    Monster(): name(nullptr), cr(nullptr), type(nullptr),align(nullptr),size(0),armor_class(0),hp(0){};
    Monster(string name, string cr, string type, string align, int size, int armor_class, int hp): name(name), cr(cr), type(type),align(align),size(size),armor_class(armor_class),hp(hp){};

    ~Monster();
    //métodos seters y geters
    void setName(string name);
    string getName();
    void setCr(string cr);
    string getCr();
    void setType(string type);
    string getType();
    void setAlign(string align);
    string getAlign();
    void setSize(int size);
    int getsize();
    void setArmor_class(int armor_class);
    int getArmor_class();
    void setHp(int Hp);
    int getHp();

private:
    string name,cr,type,align;
    int size,armor_class,hp;


};



#endif //MONSTER_H
