#include <iostream>
using namespace std;
int main() {
int n; float x; double z;
n =1;
try {
switch (n) {
case 1: throw n; break;
case 2: x = n; throw x; break;
case 3: z = n; throw z; break;
}
}
catch (int n) {
cout << "catch entier n = " << n << "\n";
}
catch (float x) {
cout << "catch float x = " << x << "\n";
exit(-1);
}
cout << "fin programme\n";
}