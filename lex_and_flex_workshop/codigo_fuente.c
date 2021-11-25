#include <stdio.h>
#include<string.h>

#define MAX 10

int main(){

    int numero[10], arreglos[MAX];
    int i, val, suma=0;

    for(i=0; i <10; i++){
        val = i * 10;
        numero[i] = val;
        suma = suma + val;
    }

    return 0;
}