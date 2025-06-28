# Desafio-Xadrez

# Simulação de Movimento de Peças de Xadrez em C

Este projeto em C simula o movimento de diversas peças de xadrez (Torre, Bispo, Rainha e Cavalo) em um console. O desafio foi dividido em três níveis de dificuldade progressiva: Novato, Aventureiro e Mestre, introduzindo conceitos como diferentes estruturas de repetição, loops aninhados, recursividade e controle de fluxo avançado.

## Visão Geral do Projeto

O programa principal (`main.c`) contém a lógica para simular o movimento de cada peça conforme os requisitos de cada nível do desafio. A saída de cada movimento é exibida no console, indicando a direção percorrida pela peça.

## Níveis do Desafio

### Nível Novato: Movimentos Básicos com Estruturas de Repetição

Neste nível, o foco é na implementação dos movimentos básicos da Torre, Bispo e Rainha, utilizando uma estrutura de repetição diferente para cada peça.

* **Torre:** Move-se 5 casas para a direita usando um loop `for`.
* **Bispo:** Move-se 5 casas na diagonal (cima e direita) usando um loop `while`.
* **Rainha:** Move-se 8 casas para a esquerda usando um loop `do-while`.

**Requisitos Cumpridos:**

* Uso de `for`, `while` e `do-while` para cada peça.
* Impressão da direção do movimento a cada casa.
* Variáveis e constantes para definir o número de casas.

### Nível Aventureiro: O Movimento em "L" do Cavalo

Este nível introduz o movimento mais complexo do Cavalo, exigindo o uso de loops aninhados para simular sua trajetória em "L".

* **Cavalo:** Move-se 2 casas para baixo e 1 casa para a esquerda.
* Utiliza um loop `for` e um `while` aninhados para simular o movimento.

**Requisitos Cumpridos:**

* Implementação do movimento do Cavalo.
* Uso de pelo menos dois loops aninhados (um `for` e um `while`).
* Impressão das direções de cada etapa do movimento do Cavalo.

### Nível Mestre: Recursividade e Loops Complexos

O nível final eleva a complexidade, substituindo loops por recursividade para algumas peças e aprimorando o controle de fluxo para o Cavalo e o Bispo.

* **Torre, Bispo e Rainha:** Os movimentos são reimplementados utilizando funções recursivas.
    * Para o Bispo, a função recursiva também incorpora loops aninhados para o movimento vertical e horizontal.
* **Cavalo:** O movimento é aprimorado para 2 casas para cima e 1 para a direita, utilizando loops aninhados com múltiplas variáveis e/ou condições, incluindo o uso de `continue` e `break` para controle preciso do fluxo.

**Requisitos Cumpridos:**

* Substituição de loops por funções recursivas para Torre, Bispo e Rainha.
* Loops aninhados com múltiplas variáveis/condições para o Cavalo, com `continue` e `break`.
* Loops aninhados para o Bispo, com loop externo para movimento vertical e interno para horizontal.
* Saída clara e organizada para cada peça.

## Como Compilar e Executar

Para compilar e executar este programa, você precisará de um compilador C (como o GCC).

1.  **Salve o código:** Salve o código-fonte como `main.c` (ou outro nome de sua preferência).
2.  **Abra o terminal/linha de comando:** Navegue até o diretório onde você salvou o arquivo.
3.  **Compile o programa:**
    ```bash
    gcc main.c -o xadrez_simulacao
    ```
4.  **Execute o programa:**
    ```bash
    ./xadrez_simulacao
    ```

## Estrutura do Código

O código é estruturado para facilitar a leitura e o entendimento:

* **`main` function:** Contém as chamadas para as simulações de cada peça, organizadas por nível de desafio.
* **Funções Recursivas:** `moverTorreRecursivo`, `moverBispoRecursivo`, `moverRainhaRecursivo` implementam os movimentos utilizando recursividade para o nível mestre.
* **Comentários:** O código é amplamente comentado para explicar a lógica de cada seção, especialmente nos movimentos mais complexos e na recursividade.

## Requisitos Não Funcionais (Aplicados a todos os níveis)

* **Performance:** O código é eficiente e executa sem atrasos perceptíveis.
* **Documentação:** O código é bem documentado com comentários claros explicando a lógica.
* **Legibilidade:** O código é claro, organizado e fácil de entender, com nomes de variáveis descritivos e indentação adequada.
* **Tipos de Variáveis:** Apenas variáveis do tipo inteiro e string (para as saídas `printf`) são utilizadas.

## Exemplos de Saída

A saída do programa no console seguirá um padrão similar a:
