#include <iostream>
#include "RDV.h"
using namespace std;

int main() {
    RDV rdv1;
    cout << "Saisie du premier rendez-vous :" << endl;
    rdv1.saisie();

    RDV rdv2;
    cout << "\nSaisie du deuxième rendez-vous :" << endl;
    rdv2.saisie();

    cout << "\nAffichage du premier rendez-vous :" << endl;
    rdv1.affiche();

    cout << "\nAffichage du deuxième rendez-vous :" << endl;
    rdv2.affiche();

    if (rdv1.estCompatibleAvec(rdv2))
        cout << "\nLes rendez-vous sont compatibles." << endl;
    else
        cout << "\nLes rendez-vous ne sont pas compatibles (même date et heure)." << endl;

    return 0;
}
