#ifndef RDV_H
#define RDV_H

#include <iostream>
#include <string>
#include "Date.h"
#include "Heure.h"
using namespace std;

class RDV {
private:
    Date date;
    Heure heure;
    string lieu;
    int nombreDeParticipants;
    string* participants;

public:
    RDV();
    ~RDV();
    void affiche() const;
    void saisieParticipants();
    void saisieLieu();
    void saisie();
    bool estCompatibleAvec(const RDV& r) const;
    void setDate(const Date& dateRdv);
    void setHeure(const Heure& heureRdv);
    void setLieu(const string& lieuRdv);
    void setNombreDeParticipants(int nombreDeParticipants);
    void setParticipants(string* ps);
    void setParticipant(int i, string s);
};

#endif
