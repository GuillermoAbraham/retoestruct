//
// Created by stanl on 29/10/2024.
//

#include "Monster.h"
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <sstream>

void Monster::setName(string name) {
    this->name = name;
}
string Monster::getName() {
    return this->name;
}
void Monster::setCr(int cr) {
    this->cr = cr;
}
int Monster::getCr() {
    return this->cr;
}
void Monster::setType(string type) {
    this->type = type;
}
string Monster::getType() {
    return this->type;
}
void Monster::setAlign(string align) {
    this->align = align;
}
string Monster::getAlign() {
    return this->align;
}
void Monster::setSize(string size) {
    this->size = size;
}
string Monster::getsize() {
    return this->size;
}
void Monster::setArmor_class(int armor_class) {
    this->armor_class = armor_class;
}
int Monster::getArmor_class() {
    return this->armor_class;
}
void Monster::setHp(int Hp) {
    this->hp = hp;
}
int Monster::getHp() {
    return this->hp;
}

