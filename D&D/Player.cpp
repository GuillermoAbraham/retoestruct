//
// Created by stanl on 29/10/2024.
//

#include "Player.h"

void Player:: setHp(int hp){
  this->hp=hp;
}

int Player::getHp(){
  return hp;
}

void PLayer:: setLp(int lp){
  this->lp=lp;
}

int Player::getLp(){
  return lp;
}

void Player::setRace(string race){
  this->race=race;
}

string Player::getRace(){
  return race;
}

void Player::setName(string name){
  this->name=name;
}

string Player::getName(){
  return name;
}
