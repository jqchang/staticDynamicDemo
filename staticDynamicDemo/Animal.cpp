//
//  Animal.cpp
//  staticDynamicDemo
//
//  Created by Justin Chang on 5/18/17.
//  Copyright © 2017 Justin Chang. All rights reserved.
//

#include "Animal.hpp"
#include <string>
#include <iostream>

Animal::Animal() {
    this->health = 100;
    this->name = "Fido";
}

Animal::~Animal() {
}

int Animal::getHealth() {
    return this->health;
}

void Animal::setHealth(const int h) {
    this->health = h;
}

std::string Animal::getName() {
    return this->name;
}

void Animal::setName(const std::string &n) {
    this->name = n;
}

void Animal::growl() {
    std::cout << "Grrrr!" << std::endl;
}
