#include <iostream>
using namespace std;
template <class T>
T somme(T tab[], int n) {
    T s = 0;
    for (int i = 0; i < n; i++)
        s += tab[i];
    return s;
}
int main() {

    int t1[5] = {1, 2, 3, 4, 5};
    cout << "Somme (int) = " << somme(t1, 5) << endl;
    float t2[4] = {1.5, 2.5, 3.0, 4.0};
    cout << "Somme (float) = " << somme(t2, 4) << endl;

    char t3[3] = {'a', 'b', 'c'};
    cout << "Somme (char) = " << somme(t3, 3) << endl;
    return 0;
}
