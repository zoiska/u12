#ifndef U12_12_4_H
#define U12_12_4_H

#include <iostream>

using namespace std;

class Auto{
private:
    string farbe;
    string modellname;
    int leistung;
    int tankinhalt;
public:
    void druckeDaten();
    void fahren();
    void setFarbe(string farbe);
    void setModellname(string modellname);
    void setLeistung(int leistung);
    void setTankinhalt(int tankinhalt);
    string getFarbe() const;
    string getModellname() const;
    int getLeistung() const;
    int getTankinhalt() const;
};

#endif //U12_12_4_H
