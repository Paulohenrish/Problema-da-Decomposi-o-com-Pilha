# Problema-da-Decomposicao-com-Pilha
A estratégia aqui é simular o backtracking utilizando uma pilha explícita em vez de chamadas recursivas, armazenando o estado da soma atual, a sequência parcial e um limite para evitar permutações repetidas (como tratar 1+3 e 3+1 como diferentes).
Como compilar e executar (Ambiente Linux)

Para executar esta simulação de backtracking com pilhas, certifique-se de ter o compilador `g++` e o utilitário `make` instalados no seu sistema.

**Passo a passo:**

1. Abra o terminal e navegue até o diretório onde se encontram os arquivos do projeto (`ex2.cpp` e `Makefile`).
2. Para compilar o código fonte, execute o comando:
   ```bash
   make
   Com a compilação finalizada, o executável ex2 será criado. Para iniciar o programa, digite:
   ./ex2
