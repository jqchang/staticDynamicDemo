//
//  animal.hpp
//  staticDynamicDemo
//
//  Created by Justin Chang on 5/18/17.
//  Copyright © 2017 Justin Chang. All rights reserved.
//

#ifndef animal_hpp
#define animal_hpp

#include <stdio.h>
#include <string>

class Animal {
private:
    int health;
    std::string name;
public:
    Animal();
    ~Animal();
    int getHealth();
    void setHealth(const int h);
    std::string getName();
    void setName(const std::string &n);
    void growl();
};

#endif /* animal_hpp */

