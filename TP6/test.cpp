#include "Personne.h"
#include <iostream>
using namespace std;

int main() {
    Objet avec paramètres par défaut
    Personne p1("Naimi", "Salima");

    Objet complet
    Personne p2("Doe", "John", "Paris", "0601020304");

    cout << "=== Test p1 ===" << endl;
    p1.affiche();

    cout << "\n=== Test p2 ===" << endl;
    p2.affiche();

    Test des setters
    p1.setAdresse("Marseille");
    p1.setTelephone("0777888999");

    cout << "\n=== p1 après modification ===" << endl;
    p1.affiche();

    return 0;
}
