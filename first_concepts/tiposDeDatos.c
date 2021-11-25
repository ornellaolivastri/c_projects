#include <stdio.h>

int main()
{
    char C = 'y';      //tamaño de 1 byte rango: 0 ... 255
    printf("%c\n",C);
    
    int a = 20; //2 bytes rango: -32768 ... 32767
    printf("%i\n",a);

    short e = -1; //2 bytes rango: -128 ... 127
    printf("%i\n",e);

    unsigned int u = 25; //2 bytes rango: 0 ... 65535
    printf("%i\n",u);

    long l = 5932; //4 bytes rango muy grande xd
    printf("%lc\n",l);

    float f = 72.532;
    printf("%f\n",f); //aqui se mostrarán mas decimales de los que fueron asignados
    //eso se resuelve asi:
    printf("%.2f\n",f);

    double dobleDeFloat = 3.1415943;
    printf("%f\n",dobleDeFloat);
    printf("%.2f\n",dobleDeFloat);

    //Conversion de tipos de datos (CASTEO)
    int x = 7;
    printf("entero: %i - flotante: %.2f - double: %.4f - caracter: %c\n\n",x,(float)x,(double)x,(char)x );

    float i = 2342.435345;
    printf("flotante: %.2f - entero: %i - double: %.4f - caracter: %c\n",i,(int)i,(double)i,(char)i );
    
    float suma = (float)x + i;
    printf("%.2f \n",suma);
    

    //Palabras reservadas
    
}
