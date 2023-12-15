#include <iostream>
#include "12.1.h"
#include "12.2.h"
#include "12.4.h"

using namespace std;

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
