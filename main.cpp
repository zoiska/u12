#include <iostream>
#include "Auto.h"

using namespace std;

void aufg2(int num) {
    std::string var1, var2;
    for(num; num > 0; num--) {
        std::cin >> var1;
        var2 += var1 + ", ";
    }
    std::cout << var2 << std::endl;
}

namespace HSHL {
    string halloName(string name) {
        cout << "Hallo " + name + "!" << endl;
        return name;
    }
}

int main() {
    string name = "Keving Stech";

    HelloWorld();
    aufg2(5);

    HSHL::halloName(name);

    Auto BMW_SUV;
    BMW_SUV.farbe = "weiss";
    BMW_SUV.modellname = "X3 xDrive 30d";
    BMW_SUV.leistung = 260;
    BMW_SUV.tankinhalt = 67;

    BMW_SUV.fahren();
    BMW_SUV.druckeDaten();

    return 0;
}
