#include "Point.h"
#include <iostream>
#include <cmath>
using namespace std;

int Point::compteur = 0;

Point::Point() : x(0), y(0), z(0) { compteur++; }
Point::Point(double x, double y, double z) : x(x), y(y), z(z) { compteur++; }
Point::Point(const Point &p) : x(p.x), y(p.y), z(p.z) { compteur++; }

Point::~Point() { compteur--; }

double Point::getX() const { return x; }
double Point::getY() const { return y; }
double Point::getZ() const { return z; }

void Point::setX(double x) { this->x = x; }
void Point::setY(double y) { this->y = y; }
void Point::setZ(double z) { this->z = z; }

void Point::saisir() {
    cout << "Donner x: "; cin >> x;
    cout << "Donner y: "; cin >> y;
    cout << "Donner z: "; cin >> z;
}

void Point::afficher() const {
    cout << "(" << x << ", " << y << ", " << z << ")" << endl;
}

void Point::translater(double dx,double dy,double dz) {
    x += dx;
    y += dy;
    z += dz;
}

double Point::distance(const Point &p) const {
    return sqrt(pow(x - p.x, 2) + pow(y - p.y, 2) + pow(z - p.z, 2));
}

int Point::getCompteur() { return compteur; }
