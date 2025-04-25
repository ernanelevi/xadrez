#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int i_bispo = 0, i_torre = 0, i_rainha = 0, i_cavalo = 0; // declaração da varavel fora, para funcionar para os 3
    int movimentoCompleto = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    while (i_bispo < 5) // condição
    {
        printf("Bispo (%d): moveu-se na diagonal direita, para cima\n", i_bispo + 1); // imprime o movimento
        i_bispo++;                                                                    // incremento, anda uma casa a mais
    }
    printf("Bispo terminou de se mover!\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    for (i_torre = 0; i_torre < 5; i_torre++)
    {                                                               // condição
        printf("Torre (%d): moveu-se para direita\n", i_torre + 1); // imprime o movimento
    }
    printf("Torre terminou de se mover!\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    do
    {
        printf("Rainha (%d): moveu-se para a esquerda\n", i_rainha + 1); // imprime o movimento
        i_rainha++;                                                      // incremento, anda uma casa a mais
    } while (i_rainha < 8); // condição
    printf("Rainha terminou de se mover!\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
    while (movimentoCompleto--)
    {
        for (i_cavalo = 0; i_cavalo < 2; i_cavalo++)
        {
            printf("Cavalo (%d): moveu-se para cima\n", i_cavalo + 1);
        }
        printf("Cavalo: moveu-se para direita\n");
    }
    printf("Cavalo terminou de se mover!\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}