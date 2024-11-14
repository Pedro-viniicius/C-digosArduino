#include <iostream>
#include <ctime>   // Para time()
#include <cstdlib> // Para srand() e rand()

void testar_time() {
    // Obtém o tempo atual em segundos desde 1970 (Epoch)
    std::time_t tempo_atual = std::time(nullptr);

    // Imprime o tempo atual
    std::cout << "Tempo atual (segundos desde 1970): " << tempo_atual << std::endl;

    // Inicializa a semente para gerar números aleatórios usando o tempo atual
    srand(static_cast<unsigned int>(tempo_atual));

    // Gera um número aleatório
    int numero_aleatorio = rand();

    // Imprime o número aleatório gerado
    std::cout << "Número aleatório gerado com srand(time): " << numero_aleatorio << std::endl;
}

int main() {
    testar_time();
    return 0;
}
