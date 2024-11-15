//
// Created by User1 on 15/11/2024.
//

#include "Dice.h"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

void Dice::setFace1(int face1) {
    this->face1=face1;
}

int Dice::getFace1() {
    return this->face1;
}

void Dice::setFace2(int face2) {
    this->face2=face2;
}

int Dice::getFace2() {
    return this->face2;
}
void Dice::getRandomDice1() {
    srand(time(NULL));
    int random1=rand()%(8-1+1)+1;
    cout<<random1<<endl;
}

void Dice::getRandomDice2() {
    int random2=rand()%(10-1+1)+1;
    cout<<random2<<endl;
}
