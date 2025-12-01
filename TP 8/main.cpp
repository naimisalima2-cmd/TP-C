#include <iostream>
#include "Vector.h"
using namespace std;

int main() {

    // Création de quelques vecteurs
    Vector A(3);            
    Vector B(1.5, 2.5);     
    Vector C(1, 2, 3);      
    Vector D(2, 4, 6);      

    cout << "A = "; A.afficher(); cout << endl;
    cout << "B = "; B.afficher(); cout << endl;
    cout << "C = "; C.afficher(); cout << endl;
    cout << "D = "; D.afficher(); cout << endl;

    // Test addition
    Vector S = S.addition(C, D);
    cout << "\nC + D = "; S.afficher(); cout << endl;

    // Test produit scalaire
    double ps = ps.produit_scalaire(C, D);
    cout << "Produit scalaire C·D = " << ps << endl;

    // Test produit élément * droite
    Vector P1 = P1.produit_elt_droite(C, 2);
    cout << "C * 2 = "; P1.afficher(); cout << endl;

    // Test produit élément * gauche
    Vector P2 = P2.produit_elt_gauche(3, C);
    cout << "3 * C = "; P2.afficher(); cout << endl;

    // Test égalité
    cout << "\nC et D egaux ? " 
         << (C.egales(C, D) ? "Oui" : "Non") << endl;

    // Test different
    cout << "C et D differents ? " 
         << (C.differents(C, D) ? "Oui" : "Non") << endl;

    // Test affectation
    Vector E;
    E = E.affectation(C);
    cout << "\nE après affectation de C : ";
    E.afficher(); cout << endl;

    // Compteur d’objets
    cout << "\nNombre d objets Vector : " << Vector::getCompteur() << endl;

    return 0;
    
}
