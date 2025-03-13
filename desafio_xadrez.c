#include <stdio.h>

// FUNÇÃO DE MOVIMENTO DA TORRE
void moverTorre(int casas)
{
    if (casas <= 0)
        return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// FUNÇÃO DE MOVIMENTO DO BISPO
void moverBispo(int casas)
{
    if (casas <= 0)
        return;
    printf("Cima, Direita\n");
    moverBispo(casas - 1);
}

// FUNÇÃO DE MOVIMENTO DA RAINHA
void moverRainha(int casas)
{
    if (casas <= 0)
        return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// FUNÇÃO DE MOVIMENTO DO CAVALO
void moverCavalo()
{
    printf("Movimento do Cavalo:\n");
    for (int i = 1; i <= 2; i++)
    { // Duas casas para cima
        printf("Cima\n");
    }
    for (int j = 1; j <= 1; j++)
    { // Uma casa para a direita
        printf("Direita\n");
    }
}

// FUNÇÃO DE MOVIMENTO DO BISPO COM LOOPS ANINHADOS
void moverBispoComLoops()
{
    printf("Movimento do Bispo com Loops Aninhados:\n");
    for (int i = 1; i <= 5; i++)
    { // Loop externo para movimento vertical
        for (int j = 1; j <= 5; j++)
        { // Loop interno para movimento horizontal
            printf("Cima, Direita\n");
        }
    }
}

int main()
{
    // MOVIMENTO DA TORRE
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // MOVIMENTO DO BISPO
    printf("Movimento do Bispo:\n");
    moverBispo(5);
    printf("\n");

    // MOVIMENTO DA RAINHA
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // MOVIMENTO DO CAVALO
    moverCavalo();
    printf("\n");

    // MOVIMENTO DO BISPO COM LOOPS ANINHADOS
    moverBispoComLoops();
    printf("\n");

    return 0;
}