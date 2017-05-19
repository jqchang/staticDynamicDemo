//
//  Cat.hpp
//  staticDynamicDemo
//
//  Created by Justin Chang on 5/18/17.
//  Copyright © 2017 Justin Chang. All rights reserved.
//

#ifndef Cat_hpp
#define Cat_hpp

#include <stdio.h>
#include "Animal.hpp"

class Cat: public Animal {
public:
    Cat();
    ~Cat();
    void growl();
};

#endif /* Cat_hpp */
