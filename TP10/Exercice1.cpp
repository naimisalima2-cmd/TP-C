#include <iostream>
using namespace std;
int main() { 
 int n ; 
 n=0; 
 --n=0; 
 cout<<"n="<< n <<"\n";
 try { 
  cout << "debut premier bloc try\n" ; 
  if (n) throw n ; 
  cout << "fin premier bloc try\n" ; 
 } 
 catch (int n) { 
  cout << "catch 1 - n =  " << n << "\n" ; 
 } 
 cout << "suite programme\n" ; 
 try { 
  cout << "debut second bloc try\n" ; 
  throw n ; 
  cout << "fin second bloc try\n" ; 
 } 
 catch (int n) { 
  cout << "catch 2 - n = " << n << "\n" ; 
 } 
 cout << "fin programme\n" ; 
 
} 
 
