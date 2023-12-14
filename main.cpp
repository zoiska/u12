#include <iostream>
#include "12.1.h"

using namespace std;

void aufg2() {
    string var1,  var2;
    cin >> var1 >> var2;
    cout << var1 + var2 << endl;
}

void zweiteZwei() {
    string eing, sp;
    int anzahl;
    cout << "Wie oft?" << endl;
    cin >> anzahl;
    for(anzahl; anzahl < 0; anzahl--){
        cin >> eing;
        sp + eing;
    }
    cout << sp;
}

namespace HSHL {

    string halloName(string name) {
        string n = name;
        cout << "Was ist dein Name?" << endl;
        cin >> n;
        return n;
    }

    string hallo_Name() {
        string n;
        cout << "Was ist dein Name?" << endl;
        cin >> n;
        cout << "Hallo " + n << endl;
        return n;
    }

}


int main() {
    //cout << "Was ist dein Name?";
    //cout << "Hallo, " + HSHL::halloName("Keving") <<endl;
    //cout << HSHL::hallo_Name() << endl;
    //aufg2();
    return 0;
}
