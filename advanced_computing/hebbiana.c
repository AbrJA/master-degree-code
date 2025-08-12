#include <stdio.h>

#define N 4 // número de patrones

int main() {
    // Patrón de entrenamiento
    int X[N][2] = {
        {-1, -1},
        {-1,  1},
        { 1, -1},
        { 1,  1}
    };
    int Y[N] = {-1, -1, -1, 1};

    // Pesos y bias inicializados
    int W1 = 0, W2 = 0, b = 1;

    for (int i = 0; i < N; i++) {
        W1 += Y[i] * X[i][0];
        W2 += Y[i] * X[i][1];
        b  += Y[i];
    }

    printf("Pesos finales:\n");
    printf("W1 = %d\n", W1);
    printf("W2 = %d\n", W2);
    printf("b  = %d\n", b);

    return 0;
}
