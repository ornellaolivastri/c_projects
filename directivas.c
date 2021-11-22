// DIRECTIVAS DEL PREPROCESADOR
//son las que contienen librerias o macros, y comienzan con #

#include <stdio.h> 
//con los simbolos < > el preprocesador buscará las librerias en la libreria estandar

// #include "nombreDeMiArchivo" con las comillas, las buscará en el mismo directorio del archivo
#define PI 3.14159 //es una directiva que crea constantes simbolicas y macros
#define CUBO(a) a*a*a

int main()
{
    int suma;
    suma = PI + 3;
    printf("%i\n", suma);

    int x = 3;
    printf("El cubo de la variable x es: %i\n", CUBO(x));
}