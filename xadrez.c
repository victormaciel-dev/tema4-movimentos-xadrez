#include <stdio.h>

/*
  Tema 4 - Movimentação de Peças de Xadrez
  Objetivo: Demonstrar uso de estruturas de repetição (for, while, do-while),
            loops aninhados e recursividade simulando movimentos de peças.

  Observação:
  - Este programa NÃO é um jogo completo de xadrez.
  - A proposta é simular a lógica de deslocamento das peças usando estruturas
    de repetição, conforme solicitado no desafio.
*/

/* =========================
   MÓDULO NOVATO (loops básicos)
   Torre (for), Bispo (while), Rainha (do-while)
   ========================= */

void moverTorre(int casas) {
    printf("\n=== Torre (FOR) ===\n");
    printf("Simula movimento em linha reta por %d casa(s).\n", casas);

    for (int i = 1; i <= casas; i++) {
        printf("Torre: passo %d -> avançou 1 casa (total %d)\n", i, i);
    }
}

void moverBispo(int casas) {
    printf("\n=== Bispo (WHILE) ===\n");
    printf("Simula movimento em diagonal por %d casa(s).\n", casas);

    int i = 1;
    while (i <= casas) {
        printf("Bispo: passo %d -> avançou 1 casa na diagonal (total %d)\n", i, i);
        i++;
    }
}

void moverRainha(int casas) {
    printf("\n=== Rainha (DO-WHILE) ===\n");
    printf("Simula movimento da rainha (pode ser reta/diagonal) por %d casa(s).\n", casas);

    int i = 1;
    if (casas <= 0) {
        printf("Rainha: nenhuma casa para mover.\n");
        return;
    }

    do {
        printf("Rainha: passo %d -> avançou 1 casa (total %d)\n", i, i);
        i++;
    } while (i <= casas);
}

/* =========================
   MÓDULO AVENTUREIRO (loops aninhados)
   Cavalo (movimento em "L")
   ========================= */

void moverCavalo() {
    printf("\n=== Cavalo (LOOPS ANINHADOS) ===\n");
    printf("Movimento em L: 2 casas em uma direção + 1 casa perpendicular.\n");

    // Exemplo didático: representando "2 passos" e "1 passo" com loops aninhados
    int passos2 = 2;
    int passos1 = 1;

    printf("Simulação: (2 para frente) + (1 para a direita)\n");
    for (int i = 1; i <= passos2; i++) {
        for (int j = 1; j <= passos1; j++) {
            // No mundo real, o cavalo "salta" direto, mas aqui é simulação com loops
            printf("Cavalo: parte do L -> segmento (%d de 2) e (%d de 1)\n", i, j);
        }
    }

    printf("Resultado: Cavalo executou um movimento em L.\n");
}

/* =========================
   MÓDULO MESTRE (recursividade + condições)
   Exemplo de recursão simulando passos restantes.
   ========================= */

void movimentoRecursivo(int casasRestantes) {
    if (casasRestantes <= 0) {
        printf("Recursividade: fim do movimento (base case).\n");
        return;
    }

    printf("Recursividade: movendo 1 casa... faltam %d\n", casasRestantes);
    movimentoRecursivo(casasRestantes - 1);
}

/* =========================
   MAIN
   ========================= */

int main() {
    printf("#############################################\n");
    printf("# Tema 4 - Movimentacao de Pecas de Xadrez  #\n");
    printf("#############################################\n");
    printf("Programa em C demonstrando FOR, WHILE, DO-WHILE,\n");
    printf("loops aninhados e recursividade.\n");

    // Valores de exemplo (pode ajustar)
    int casas = 3;

    moverTorre(casas);
    moverBispo(casas);
    moverRainha(casas);
    moverCavalo();

    printf("\n=== Movimento Avancado (RECURSIVIDADE) ===\n");
    movimentoRecursivo(3);

    printf("\nPrograma finalizado com sucesso!\n");
    return 0;
}
