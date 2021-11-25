#include <stdio.h>

int main()
{
    int edad;
    printf("Ingresar edad: ");
    scanf("%d",&edad);  // no olvidar el & para referenciar la posicion de la variable!!

    if (edad >= 18)
    {
        printf("Eres mayor de edad! \n");
    }
    else if(edad == 17){
        printf("Sorry bro, casi eres mayor de edad :(  \n");
    } 
    else
    {
        printf("Eres menor de edad :D ! \n");
    }
    
}
