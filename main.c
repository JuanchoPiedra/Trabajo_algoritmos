#include <stdio.h>
#include <math.h>
int main() {
    int NUM, contador = 0, i, j;
    float sumaDivisores;
    do {
        printf("Ingrese un número entero positivo: ");
        scanf("%d", &NUM);
        if (NUM <= 0) {
            printf("Por favor, ingrese un número positivo.\n");
        }
    } while (NUM <= 0);
    for (i = 1; i <= NUM; i++) {
        sumaDivisores = 0;
        int limite = (int)sqrt(i);  
        for (j = 1; j <= limite; j++) {
            if (i % j == 0) {
                sumaDivisores += j + i / j;
            }
        }
        if (limite * limite == i) {
            sumaDivisores -= limite;
        }
        if (sumaDivisores - i == i) {
            printf("%d es un número perfecto.\n", i);
            contador++;
        }
    }
    printf("Total de números perfectos entre 1 y %d: %d\n", NUM, contador);
    return 0;
}
