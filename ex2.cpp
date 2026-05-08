#include <iostream>
#include <vector>
#include <stack>

using namespace std;

struct Estado {
    int soma_atual;
    vector<int> sequencia;
    int limite_superior; 
};

void decomporNumero(int N) {
    stack<Estado> pilha;
    pilha.push({0, {}, N});

    while (!pilha.empty()) {
        Estado atual = pilha.top();
        pilha.pop();

        if (atual.soma_atual == N) {
            for (size_t i = 0; i < atual.sequencia.size(); ++i) {
                cout << atual.sequencia[i] << (i == atual.sequencia.size() - 1 ? "" : " + ");
            }
            cout << "\n";
            continue;
        }

        for (int i = 1; i <= min(atual.limite_superior, N - atual.soma_atual); ++i) {
            Estado novo_estado = atual;
            novo_estado.sequencia.push_back(i);
            novo_estado.soma_atual += i;
            novo_estado.limite_superior = i; 
            pilha.push(novo_estado);
        }
    }
}

int main() {
    int N = 4;
    cout << "--- Exercicio 2: Decomposicao com Pilha ---\n";
    cout << "Decomposicoes de " << N << ":\n";
    decomporNumero(N);
    return 0;
}
