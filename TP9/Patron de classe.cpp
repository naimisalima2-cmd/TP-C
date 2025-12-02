#include <iostream>
using namespace std;

template <class T>
class Vector {
private:
    T* data;   
    int n;     

public:

    Vector(int size) {
        n = size;
        data = new T[n];
    }

    
    ~Vector() {
        delete[] data;
    }

    T& operator[](int i) {
        if (i < 0 || i >= n) {
            cout << "Erreur : indice hors limites !" << endl;
            exit(1); 
        }
        return data[i];
    }

    void afficher() {
        for (int i = 0; i < n; i++)
            cout << data[i] << " ";
        cout << endl;
    }
};

int main() {
    Vector<int> V(5);

    for (int i = 0; i < 5; i++)
        V[i] = i * 10;

    cout << "Contenu du vecteur : ";
    V.afficher();

    cout << "V[2] = " << V[2] << endl;

    return 0;
}
