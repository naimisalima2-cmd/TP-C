#include <stdio.h>
 void exchange(int *a, int *b){
     int c=*a;
     *a=*b;
     *b=c;
 }
int main(){
    int a,b;
    printf("Donner deux valeurs entieres a et b: \n");
    scanf("%d %d",&a,&b);
    printf("a= %d b= %d \n",a,b);
    exchange(&a,&b);
    printf("Les deux valeurs echangees : a= %d b= %d",a,b);
return 0;}