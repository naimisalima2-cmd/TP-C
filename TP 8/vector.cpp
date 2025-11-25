#include "Vector.h"

int Vector::compteur = 0;

Vector::Vector() {
    data = nullptr;
    n = 0;
    compteur++;
}

Vector::Vector(int size) {
    n = size;
    data = new double[n];
    for(int i = 0; i < n; i++) data[i] = 0;
    compteur++;
}

Vector::Vector(double a) {
    n = 1;
    data = new double[1];
    data[0] = a;
    compteur++;
}

Vector:: Vector (double a, double b){
    n=2;
    data = new double [2];
    data [0]= a;
    data[1]= b;
    compteur ++;
}
 Vector:: Vector (double a, double b, double c){
    n=3;
    data = new double [3];
    data[0]= a;
    data[1] = b;
    data [2]= c;
    compteur ++;
 }

 Vector:: Vector ( double a, double b, double c, double d){
    n=4;
    data =new double[4];
    data[0]=a;
    data[1]=b;
    data[2]=c;
    data[3]=d;
    compteur ++;
 }

Vector::Vector(const Vector& v) {
    n = v.n;

    if(n == 0) data = nullptr;
    else {
        data = new double[n];
        for(int i = 0; i < n; i++)
            data[i] = v.data[i];
    }

    compteur++;
}

Vector::~Vector() {
    delete[] data;
    compteur--;
}

int Vector::getCompteur() {
    return compteur;
}

Vector Vector::affectation(const Vector& V) {
    delete[] data;
    n = V.n;

    if(n == 0) data = nullptr;
    else {
        data = new double[n];
        for(int i = 0; i < n; i++)
            data[i] = V.data[i];
    }

    return *this;
}

Vector Vector::addition(const Vector& V1, const Vector& V2) {
    Vector r(V1.n);

    for(int i = 0; i < V1.n; i++)
        r.data[i] = V1.data[i] + V2.data[i];

    return r;
}

double Vector::produit_scalaire(const Vector& V1, const Vector& V2) {
    double s = 0;

    for(int i = 0; i < V1.n; i++)
        s += V1.data[i] * V2.data[i];

    return s;

Vector produit_elt_droite(const Vector& V1, double k) {

    Vector r(V.n);

    for(int i = 0; i < V.n; i++)
        r.data[i] = V.data[i] * k;

    return r;
}

Vector Vector::produit_elt_gauche(double k, const Vector& V) {
    Vector r(V.n);

    for(int i = 0; i < V.n; i++)
        r.data[i] = k * V.data[i];

    return r;
}

bool Vector::egales(const Vector& V1, const Vector& V2) {
    if(V1.n != V2.n) return false;

    for(int i = 0; i < V1.n; i++)
        if(V1.data[i] != V2.data[i])
            return false;

    return true;
}

bool Vector::differents(const Vector& V1, const Vector& V2) {
    return !egales(V1, V2);
}

void Vector::afficher() const {
    cout << "[";
    for(int i = 0; i < n; i++) {
        cout << data[i];
        if(i < n - 1) cout << " ";
    }
    cout << "]";
}