#include <iostream>
using namespace std;

#include "Personne.h"
#include "Eleve.h"
#include "Personnel.h"
#include "PersonnelAdmin.h"
#include "EnseignantPermanent.h"
#include "EnseignantVacataire.h"
#include "ListePersonnelPointeur.h"
#include "ListePersonnel.h"   // <-- AJOUT IMPORTANT

int main() {

    cout << "\n===================== TEST DES CLASSES =====================\n";

    // 1. Test Personne
    cout << "\n--- Test Personne ---\n";
    Personne pers1("Smith", "John", "Paris", "0611223344");
    pers1.affiche();

    // 2. Test Eleve
    cout << "\n--- Test Eleve ---\n";
    Eleve elv("Naimi", "Salima", "GI2025", 3.8, "TD3");
    elv.affiche();

    // 3. Test Personnel
    cout << "\n--- Test Personnel ---\n";
    Personnel p("Martin", "Anna", 2000);
    p.affiche();
    cout << "Salaire = " << p.calculSalaire() << endl;

    // 4. Test PersonnelAdmin
    cout << "\n--- Test PersonnelAdmin ---\n";
    PersonnelAdmin pa("Karim", "Ali", 1800, 30, 10);
    pa.affiche();
    cout << "Salaire = " << pa.calculSalaire() << endl;

    // 5. Test EnseignantPermanent
    cout << "\n--- Test EnseignantPermanent ---\n";
    EnseignantPermanent ep("Ben", "Mourad", 2500, 3, 200, "B12");
    ep.affiche();
    cout << "Salaire = " << ep.calculSalaire() << endl;

    // 6. Test EnseignantVacataire
    cout << "\n--- Test EnseignantVacataire ---\n";
    EnseignantVacataire ev("Lamia", "Sofi", 0, 50, "C23", 20);
    ev.affiche();
    cout << "Salaire = " << ev.calculSalaire() << endl;

    // 7. Test ListePersonnel (AVEC POINTEURS = POLYMORPHISME)
    cout << "\n===================== TEST ListePersonnel =====================\n";

    ListePersonnelPointeur liste;

    liste.ajoutPersonnel(&p);
    liste.ajoutPersonnel(&pa);
    liste.ajoutPersonnel(&ep);
    liste.ajoutPersonnel(&ev);

    liste.afficherSalaires();

    // 8. Test ListePersonnel SANS pointeurs 
    cout << "\n\n===================== TEST ListePersonnel SANS POINTEURS =====================\n";

    ListePersonnel listeSansPointeur;

    listeSansPointeur.ajoutPersonnel(p);
    listeSansPointeur.ajoutPersonnel(pa);
    listeSansPointeur.ajoutPersonnel(ep);
    listeSansPointeur.ajoutPersonnel(ev);

    listeSansPointeur.afficherSalaires();

    cout << "\n===================== FIN DES TESTS =====================\n";

    return 0;
}
