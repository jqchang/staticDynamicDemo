//
//  main.cpp
//  staticDynamicDemo
//
//  Created by Justin Chang on 5/18/17.
//  Copyright © 2017 Justin Chang. All rights reserved.
//

#include <iostream>
#include "Animal.hpp"
#include "Cat.hpp"
using namespace std;

void provoke(Animal* a) {
    // Causes the provoked animal to growl
    a->growl();
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "Hello, World!\n";
    
    Animal f;
    f.setName("Fido");
    cout << "Animal: " << f.getName() << endl;
    provoke(&f);
    // As expected, "Grrrr!" appears.
    
    Cat c;
    cout << "Cat: " << c.getName() << endl;
    provoke(&c);
    // We expect to see "Meow!" because we have a separate Cat.growl() function
    // However, since the provoke function expects an Animal type parameter,
    // the C++ compiler will search for the Animal.growl() function and skip the
    // Cat.growl() function!
    
    return 0;
}
