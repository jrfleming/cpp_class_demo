// Joseph Fleming
// Created by Joseph on 3/23/2022.
// main driver is main.cpp

#include <string>
#include <iostream>
#include "Bird.h"

using namespace std;

int main(){
    cout << "Tweet, Tweet, Tweet " << endl;

    Bird robin("Robin");
    cout << robin.get_seeds() << endl;
    return 0;
}

