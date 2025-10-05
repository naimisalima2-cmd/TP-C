#ifndef VECTOR_H
#define VECTOR_H

#include <vector>

class Vector {
private:
    std::vector<double> coordonnees;
    static int compteurInstances;

public:
    Vector();
    Vector(int dimension, double valeur = 0.0);
    Vector(const Vector& v);
    ~Vector();

    double getCoordinates(int i) const;
    void setCoordinates(int i, double valeur);
    void afficher() const;
    double calculerNorme() const;
    bool estEgal(const Vector& v) const;
    double produitScalaire(const Vector& v) const;
    Vector multiplicationParReel(double reel) const;
    Vector additionner(const Vector& v) const;

    static int getCompteurInstances();
};

#endif
