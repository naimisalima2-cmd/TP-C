#include "RDV.h"
#include <iostream>
#include <limits>
using namespace std;

RDV::RDV() {
    nombreDeParticipants = 0;
    participants = new string[10];
}

RDV::~RDV() {
    delete[] participants;
}

void RDV::affiche() const {
    cout << "Date : "; date.affiche();
    cout << " Heure : "; heure.affiche();
    cout << " Lieu : " << lieu << endl;
    cout << "Nombre de participants : " << nombreDeParticipants << endl;
    cout << "Participants : ";
    for (int i = 0; i < nombreDeParticipants; i++) {
        cout << participants[i];
        if (i < nombreDeParticipants - 1) cout << ", ";
    }
    cout << endl;
}

void RDV::saisieParticipants() {
    cout << "Entrez le nombre de participants (max 10) : ";
    cin >> nombreDeParticipants;
    if (nombreDeParticipants > 10) nombreDeParticipants = 10;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i = 0; i < nombreDeParticipants; i++) {
        cout << "Nom du participant " << i + 1 << " : ";
        getline(cin, participants[i]);
    }
}

void RDV::saisieLieu() {
    cout << "Entrez le lieu du rendez-vous : ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, lieu);
}

void RDV::saisie() {
    date.saisie();
    heure.saisie();
    saisieLieu();
    saisieParticipants();
}

bool RDV::estCompatibleAvec(const RDV& r) const {
    return !(date.getJour() == r.date.getJour() &&
             date.getMois() == r.date.getMois() &&
             date.getAnnee() == r.date.getAnnee() &&
             heure.getHeures() == r.heure.getHeures() &&
             heure.getMinutes() == r.heure.getMinutes());
}

void RDV::setDate(const Date& dateRdv) { date = dateRdv; }
void RDV::setHeure(const Heure& heureRdv) { heure = heureRdv; }
void RDV::setLieu(const string& lieuRdv) { lieu = lieuRdv; }
void RDV::setNombreDeParticipants(int nombre) { nombreDeParticipants = nombre; }
void RDV::setParticipants(string* ps) {
    for (int i = 0; i < nombreDeParticipants && i < 10; i++)
        participants[i] = ps[i];
}
void RDV::setParticipant(int i, string s) {
    if (i >= 0 && i < 10) participants[i] = s;
}
