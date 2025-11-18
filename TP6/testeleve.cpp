#include "Eleve.h"
#include <iostream>
using namespace std;

int main() {
    cout << "===== Test Classe Eleve =====\n";

    // Test avec paramètres par défaut
    Eleve e1("Naimi", "Salima");

    // Test avec tous les paramètres
    Eleve e2("Doe", "John", "GI2025", 3.7, "TD2", "Paris", "0601020304");

    cout << "\n--- Eleve e1 ---\n";
    e1.affiche();

    cout << "\n--- Eleve e2 ---\n";
    e2.affiche();

    // Test setters
    e1.setPromotion("CM2026");
    e1.setGPA(3.9);
    e1.setGroupeTD("TD3");

    cout << "\n--- e1 apres modifications ---\n";
    e1.affiche();

    return 0;
}
