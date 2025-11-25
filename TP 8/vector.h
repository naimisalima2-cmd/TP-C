#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
using namespace std;

class Vector {
private:
    double* data;
    int n;
    static int compteur;

public:
    Vector();
    Vector(int size);
    Vector(double a);
    Vector(double a, double b);
    Vector(double a, double b, double c);
    Vector(double a, double b, double c, double d);
    Vector(const Vector& v);
    ~Vector();

    static int getCompteur();

    Vector affectation(const Vector& V);
    Vector addition(const Vector& V1, const Vector& V2);
    double produit_scalaire(const Vector& V1, const Vector& V2);
    Vector produit_elt_droite(const Vector& V1, double k);
    Vector produit_elt_gauche(double k, const Vector& V1);
    bool egales(const Vector& V1, const Vector& V2);
    bool differents(const Vector& V1, const Vector& V2);

    void afficher() const;
};

#endif
