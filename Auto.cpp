#include <iostream>
#include "Auto.h"

void Auto::druckeDaten() {
    cout << getModellname() + ", " << getFarbe() + ", " << getLeistung() << ", " << getTankinhalt() << endl;
}

void Auto::fahren() {
    int temp = getTankinhalt();
    setTankinhalt(temp - 1);
}

void Auto::setFarbe(string farbe) {
    this->farbe = farbe;
}

void Auto::setModellname(string modellname) {
    this->modellname = modellname;
}

void Auto::setLeistung(int leistung) {
    this->leistung = leistung;
}

void Auto::setTankinhalt(int tankinhalt) {
    this->tankinhalt = tankinhalt;
}

string Auto::getFarbe() const {
    return this->farbe;
}

string Auto::getModellname() const {
    return this->modellname;
}

int Auto::getLeistung() const {
    return this->leistung;
}

int Auto::getTankinhalt() const {
    return this->tankinhalt;
}
