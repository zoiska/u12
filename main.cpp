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

string halloName(string name) {
    cout << "Hallo " + name + "!" << endl;
    return name;
}

int main() {
    string name = "Keving Stech";

    //aufg2(5);

    halloName(name);

    Auto BMW_SUV;
    BMW_SUV.setFarbe("weiss");
    BMW_SUV.setModellname("X3 xDrive 30d");
    BMW_SUV.setLeistung(260);
    BMW_SUV.setTankinhalt(67);

    BMW_SUV.fahren();
    BMW_SUV.druckeDaten();

    Auto Kev_Car("Keving 1000", "Braun", 50, 36);

    Kev_Car.fahren();
    Kev_Car.druckeDaten();

    return 0;
}
