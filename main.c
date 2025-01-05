#include <stdio.h>

int main (int argc, char *argv[]) {
   int n, pares = 0, impares = 0;
    
    do {
        printf("Ingrese un numero, 0 no cuenta (negativo para mostrar resultados): ");
        scanf("%d", &n);
        
        if (n < 0) {
            break;
        }
        
        if (n != 0) {
            if (n % 2 == 0) {
                pares++;
            } else {
                impares++;
            }
        }
    } while (n >= 0);
    
    printf("Cantidad de numeros pares: %d\n", pares);
    printf("Cantidad de numeros impares: %d\n", impares);
    
    return 0;
}