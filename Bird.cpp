// Jospeh FLeming
// Created by Joseph on 3/23/2022.
//Bird calss file Bird.cpp

#include "Bird.h"
using namespace std;
#include <iostream>

Bird::Bird(std::string species):bird_type(species){

}

int Bird::get_seeds(){
    return this->seeds;
}