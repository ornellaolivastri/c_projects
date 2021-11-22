#include <stdio.h>

int main()
{
    int numero1;
    int numero2;
    int resultado;

    printf("Ingresar primer valor: ");
    
    // la funcion scanf tiene dos argumentos: 
    // (tipo de dato que ingresa, variable donde se almacena ese valor)
    scanf("%d",&numero1); //el %d indica el tipo de dato int 
    
    printf("Ingresar segundo valor: ");
    scanf("%d",&numero2);

    resultado = numero1 + numero2;

    printf("El resultado de la suma es: %d\n",resultado);

    //siempre que se usen operadores aritmeticos se debe recordar la propiedad asociativa
}