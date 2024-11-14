#include <iostream>
#include <locale>  // Para configurar o locale

int main() {
    // Configurar o locale para português no Windows
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

    // Teste com acentos
    std::cout << "Olá, mundo com acento!\n";
    std::cout << "Você está aprendendo C++!\n";

    return 0;
}
