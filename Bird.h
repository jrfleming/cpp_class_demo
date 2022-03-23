// Joseph fleming
// Created by Joseph on 3/23/2022.
// Bird header file bird.h

#include <string>
using namespace std;
#ifndef GIT_DEMO_BIRD_H
#define GIT_DEMO_BIRD_H


class Bird {
public:
    Bird(std::string);
    int get_seeds();
private:
    int seeds = 10;
    int nuts = 2;
    string bird_type;
};


#endif //GIT_DEMO_BIRD_H
