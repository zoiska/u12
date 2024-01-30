#include <iostream>
#include "Auto.h"

using namespace std;

void aufg2(int num) {
    string var1, var2;
    for(num; num > 0; num--) {
        cin >> var1;
        var2 += var1 + ", ";
    }
    cout << var2 << endl;
}

namespace HSHL {
    string halloName(string name) {
        cout << "Hallo " + name + "!" << endl;
        return name;
    }
}

int main() {
    string name = "Keving Stech";

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
