#include <iostream>
using namespace std;

template <class T>
int indiceMin(const T tab[], int n) {
    int imin = 0;
    for (int i = 1; i < n; i++)
        if (tab[i] < tab[imin])
            imin = i;
    return imin;
}

template <class T, class U>
int indiceMin2(const T tab1[], const U tab2[], int n) {
    int imin = 0;
    for (int i = 1; i < n; i++) {

       
        if (tab1[i] < tab1[imin]) {
            imin = i;
        }
        
        else if (tab1[i] == tab1[imin] && tab2[i] < tab2[imin]) {
            imin = i;
        }
    }
    return imin;
}

int main() {
    int t1[5] = {8, 3, 10, 1, 7};
    cout << "Indice min = " << indiceMin(t1, 5) << endl;

    int notes[5] = {12, 9, 9, 14, 9};
    float temps[5] = {3.2, 5.0, 4.8, 2.0, 3.1};

    cout << "Indice min (deux parametres types) = "
         << indiceMin2(notes, temps, 5) << endl;

    return 0;
}
