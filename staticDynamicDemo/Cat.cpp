//
//  Cat.cpp
//  staticDynamicDemo
//
//  Created by Justin Chang on 5/18/17.
//  Copyright © 2017 Justin Chang. All rights reserved.
//

#include "Cat.hpp"
#include "Animal.hpp"
#include <string>
#include <iostream>

Cat::Cat() {
    Animal::Animal();
    Animal::setHealth(900); // 9 lives
    Animal::setName("Garfield");
}

Cat::~Cat() {
}

void Cat::growl() {
    std::cout << this->getName() << ": Meow!" << std::endl;
}
