#include <stdio.h>

// ------------------------------
// Funções recursivas
// ------------------------------

// Movimento da Torre (para a direita)
void moverTorre(int casas) {
    if (casas <= 0)
        return; // caso base: não há mais casas
    printf("Direita\n");
    moverTorre(casas - 1); // chamada recursiva
}

// Movimento da Rainha (para a esquerda)
void moverRainha(int casas) {
    if (casas <= 0)
        return; // caso base
    printf("Esquerda\n");
    moverRainha(casas - 1); // chamada recursiva
}

// Movimento do Bispo com recursão + loops aninhados
void moverBispo(int casasVerticais, int casasHorizontais) {
    if (casasVerticais <= 0)
        return; // caso base da recursão
    int h;
    for (h = 0; h < casasHorizontais; h++) { // loop interno: horizontal
        printf("Cima, Direita\n");
    }
    moverBispo(casasVerticais - 1, casasHorizontais); // chamada recursiva
}

// ------------------------------
// Função principal
// ------------------------------
int main() {
    // Quantidade de casas
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(casasTorre);
    printf("\n");

    printf("Movimento do Bispo (5 casas diagonal Cima-Direita usando recursao e loops aninhados):\n");
    moverBispo(casasBispo, 1); // loop interno horizontal com 1 passo
    printf("\n");

    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(casasRainha);
    printf("\n");

    // ------------------------------
    // Movimento complexo do Cavalo
    // ------------------------------
    printf("Movimento do Cavalo (2 casas para cima, 1 para direita, usando loops complexos):\n");

    int verticalMax = 2; // duas casas para cima
    int horizontalMax = 1; // uma casa para a direita

    int v, h;

    for (v = 1; v <= verticalMax; v++) { // loop externo: vertical
        printf("Cima\n");
        h = 1;
        while (h <= horizontalMax) { // loop interno: horizontal
            printf("Direita\n");
            h++;
            break; // encerra após a primeira casa à direita
        }
    }

    return 0;
}

