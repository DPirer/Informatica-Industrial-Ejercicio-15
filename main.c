#include <stdio.h>

// Pedro Antonio Estévez Pérez

// Ejercicio 15

/* En lenguaje C los enteros cortos sin signo ocupan en memoria 2 bytes.
 * Se declaran como unsigned short int. Crea un programa para descomponer
 * un entero corto sin signo en dos bytes utilizando exclusivamente operaciones
 * con bits.*/

/* Este es más corto que los anteriores. Para la parte izquierda, sólo hay que
 * hacer un desplazamiento de 8 a la izquierda y para la derecha, hacer una and
 * con todo 1. Ya sólo imprimir los resultados. Es necesario dejar los 0 para
 * comprobar instantáneamente que el resultado es correcto.*/

int main(void)
{
    unsigned short int grande;
    unsigned char alto, bajo;
    int i;

    printf("Introduce un numero: ");
    scanf("%hu", &grande);

    printf("En binario es: "); // Imprimimos el numero en binario, como siempre
    for(i = 32768; i > 0; i >>= 1)
    {
        if(i & grande)
            printf("1");
        else
            printf("0");
    }
    printf("b\n");

    alto = grande >> 8; // Hacemos las dos modificaciones
    bajo = grande & 0xFF;

    printf("La mitad izquierda es: "); // Y volvemos a imprimir los dos binarios resultantes
    for(i = 128; i > 0; i >>= 1)
    {
        if(i & alto)
            printf("1");
        else
            printf("0");
    }
    printf("b\n");

    printf("La mitad derecha es: ");
    for(i = 128; i > 0; i >>= 1)
    {
        if(i & bajo)
            printf("1");
        else
            printf("0");
    }
    printf("b\n\n");
}
