#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída.

// --- Funções Recursivas para o Nível Mestre---

/**
 * @brief Simula o movimento da Torre recursivamente.
 * @param casas Restantes para mover.
 */
void moverTorreRecursivo(int casas) {
    if (casas > 0) {
        printf("Direita\n"); // A torre move 5 casas para a direita.
        moverTorreRecursivo(casas - 1); // Chama a função recursivamente para a próxima casa.
    }
}

/**
 * @brief Simula o movimento do Bispo recursivamente com loops aninhados.
 * @param casas Restantes para mover (na diagonal).
 * @param i Contador para o loop externo (vertical).
 * @param j Contador para o loop interno (horizontal).
 */
void moverBispoRecursivo(int casas, int i, int j) {
    if (casas > 0) {
        // Loop externo para o movimento vertical (Cima)
        for (; i < 1; i++) { // Garante que "Cima" seja impresso apenas uma vez por "casa" diagonal
            // Loop interno para o movimento horizontal (Direita)
            for (; j < 1; j++) { // Garante que "Direita" seja impresso apenas uma vez por "casa" diagonal
                printf("Cima, Direita\n");
            }
        }
        moverBispoRecursivo(casas - 1, 0, 0); // Chama a função recursivamente para a próxima casa diagonal, resetando os contadores dos loops internos.
    }
}

/**
 * @brief Simula o movimento da Rainha recursivamente.
 * @param casas Restantes para mover.
 */
void moverRainhaRecursivo(int casas) {
    if (casas > 0) {
        printf("Esquerda\n"); // A rainha move 8 casas para a esquerda.
        moverRainhaRecursivo(casas - 1); // Chama a função recursivamente para a próxima casa.
    }
}

int main() {
    // --- Desafio: Nível Novato ---

    printf("--- Movimento da Torre (Nível Novato) ---\n");
    // Variável para controlar o número de casas a serem movidas pela Torre.
    int casasTorre = 5;
    // Loop 'for' para simular o movimento da Torre.
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n"); // Imprime a direção do movimento.
    }
    printf("\n"); // Adiciona uma linha em branco para separar as saídas.

    printf("--- Movimento do Bispo (Nível Novato) ---\n");
    // Variável para controlar o número de casas a serem movidas pelo Bispo.
    int casasBispo = 5;
    // Variável de controle para o loop 'while'.
    int contadorBispo = 0;
    // Loop 'while' para simular o movimento do Bispo.
    while (contadorBispo < casasBispo) {
        printf("Cima, Direita\n"); // Imprime a combinação de direções para a diagonal.
        contadorBispo++; // Incrementa o contador.
    }
    printf("\n"); // Adiciona uma linha em branco para separar as saídas.

    printf("--- Movimento da Rainha (Nível Novato) ---\n");
    // Variável para controlar o número de casas a serem movidas pela Rainha.
    int casasRainha = 8;
    // Variável de controle para o loop 'do-while'.
    int contadorRainha = 0;
    // Loop 'do-while' para simular o movimento da Rainha.
    if (casasRainha > 0) { // Garante que o loop execute pelo menos uma vez se casasRainha for maior que 0
        do {
            printf("Esquerda\n"); // Imprime a direção do movimento.
            contadorRainha++; // Incrementa o contador.
        } while (contadorRainha < casasRainha);
    }
    printf("\n"); // Adiciona uma linha em branco para separar as saídas.

    // --- Desafio: Nível Aventureiro ---

    printf("--- Movimento do Cavalo (Nível Aventureiro) ---\n");
    printf("\n"); // Linha em branco para separar o movimento do Cavalo.

    // Variáveis para controlar o movimento do Cavalo.
    int movimentoParaBaixo = 2; // Duas casas para baixo.
    int movimentoParaEsquerda = 1; // Uma casa para a esquerda.

    // Loop 'for' para as duas casas para baixo.
    for (int i = 0; i < movimentoParaBaixo; i++) {
        printf("Baixo\n"); // Imprime a direção "Baixo".
    }

    // Loop 'while' para a uma casa para a esquerda.
    int j = 0;
    while (j < movimentoParaEsquerda) {
        printf("Esquerda\n"); // Imprime a direção "Esquerda".
        j++;
    }
    printf("\n"); // Adiciona uma linha em branco para separar as saídas.

    // --- Desafio: Nível Mestre ---

    printf("--- Movimento da Torre (Nível Mestre - Recursividade) ---\n");
    moverTorreRecursivo(5); // Chama a função recursiva para a Torre.
    printf("\n");

    printf("--- Movimento do Bispo (Nível Mestre - Recursividade com Loops Aninhados) ---\n");
    moverBispoRecursivo(5, 0, 0); // Chama a função recursiva para o Bispo.
    printf("\n");

    printf("--- Movimento da Rainha (Nível Mestre - Recursividade) ---\n");
    moverRainhaRecursivo(8); // Chama a função recursiva para a Rainha.
    printf("\n");

    printf("--- Movimento do Cavalo (Nível Mestre - Loops Complexos) ---\n");
    // O movimento do Cavalo agora será para cima e para a direita (2 casas para cima, 1 para a direita).
    int casasCima = 2;
    int casasDireita = 1;

    // Loops aninhados com múltiplas variáveis e condições para o Cavalo.
    // Loop externo para o movimento vertical (Cima).
    for (int k = 0; k < casasCima + casasDireita; k++) { // Loop para o total de passos (2 para cima + 1 para direita)
        if (k < casasCima) { // Primeiras duas iterações para o movimento "Cima"
            printf("Cima\n");
            // Exemplo de uso de 'continue' para pular para a próxima iteração se uma condição específica for met.
            if (k == 0) {
                continue; 
            }
        } else { // Próxima iteração para o movimento "Direita"
            printf("Direita\n");
            // Exemplo de uso de 'break' para sair do loop mais cedo.
            if (k == casasCima + casasDireita - 1) { // Quando o movimento da direita for concluído
                break; 
            }
        }
    }
    printf("\n");

    return 0; // Indica que o programa foi executado com sucesso.
}
