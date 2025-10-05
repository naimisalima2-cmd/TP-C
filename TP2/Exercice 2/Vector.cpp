#include "Vector.h"
#include <iostream>
#include <cmath>
#include <stdexcept>

int Vector::compteurInstances = 0;
Vector::Vector() {
    coordonnees = {};
    compteurInstances++;
}

Vector::Vector(int dimension, double valeur) {
    coordonnees = std::vector<double>(dimension, valeur);
    compteurInstances++;
}

Vector::Vector(const Vector& v) {
    coordonnees = v.coordonnees;
    compteurInstances++;
}
Vector::~Vector() {
    compteurInstances--;
}
double Vector::getCoordinates(int i) const {
    if(i >= 0 && i < coordonnees.size())
        return coordonnees[i];
    throw std::out_of_range("Indice hors limite");
}

void Vector::setCoordinates(int i, double valeur) {
    if(i >= 0 && i < coordonnees.size())
        coordonnees[i] = valeur;
    else
        throw std::out_of_range("Indice hors limite");
}

void Vector::afficher() const {
    std::cout << "(";
    for(size_t i = 0; i < coordonnees.size(); i++) {
        std::cout << coordonnees[i];
        if(i != coordonnees.size() - 1)
            std::cout << ", ";
    }
    std::cout << ")" << std::endl;
}

double Vector::calculerNorme() const {
    double somme = 0;
    for(double x : coordonnees)
        somme += x*x;
    return std::sqrt(somme);
}

bool Vector::estEgal(const Vector& v) const {
    if(coordonnees.size() != v.coordonnees.size()) return false;
    for(size_t i = 0; i < coordonnees.size(); i++)
        if(coordonnees[i] != v.coordonnees[i])
            return false;
    return true;
}

double Vector::produitScalaire(const Vector& v) const {
    if(coordonnees.size() != v.coordonnees.size())
        throw std::invalid_argument("Dimensions incompatibles");
    double somme = 0;
    for(size_t i = 0; i < coordonnees.size(); i++)
        somme += coordonnees[i] * v.coordonnees[i];
    return somme;
}

Vector Vector::multiplicationParReel(double reel) const {
    Vector resultat(*this);
    for(double &x : resultat.coordonnees)
        x *= reel;
    return resultat;
}

Vector Vector::additionner(const Vector& v) const {
    if(coordonnees.size() != v.coordonnees.size())
        throw std::invalid_argument("Dimensions incompatibles");
    Vector resultat(*this);
    for(size_t i = 0; i < coordonnees.size(); i++)
        resultat.coordonnees[i] += v.coordonnees[i];
    return resultat;
}

int Vector::getCompteurInstances() {
    return compteurInstances;
}
