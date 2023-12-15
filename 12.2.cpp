//
// Created by zoisk on 14.12.23.
//
#include <iostream>
#include "12.2.h"

void aufg2(int num) {
    std::string var1, var2;
    for(num; num > 0; num--) {
        std::cin >> var1;
        var2 += var1 + ", ";
    }
    std::cout << var2 << std::endl;
}