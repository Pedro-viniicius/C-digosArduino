#include <vector>
#include <string>
#include <cstdlib>   
#include "le_arquivo.hpp"
#include <ctime> 
using namespace std;

extern string palavra_secreta;

void sorteia_palavra() {
    std::vector<std::string> palavras = le_arquivo();

    srand(static_cast<unsigned int>(std::time(nullptr)));  

    int indice_sorteado = rand() % palavras.size();

    palavra_secreta = palavras[indice_sorteado];
}
