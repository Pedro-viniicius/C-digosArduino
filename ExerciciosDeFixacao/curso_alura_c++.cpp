#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


 
 int main (){
    
    cout << "***************************************"<< endl;
    cout << "* Boas vindas ao Jogo da Adivinhacao! *"<< endl;
    cout << "***************************************"<< endl;

    cout << "Qual modo voce quer jogar ? " << endl;
    cout << "Facil (F), Medio (M), Dificil (D)" << endl;

    char modo;
    cin >> modo;

    int numero_de_tentativas;

    if (modo == 'F'|| modo == 'f'){
        numero_de_tentativas = 15;
    } else if (modo == 'M'|| modo == 'm') {
        numero_de_tentativas = 10;
    } else {
        numero_de_tentativas = 5;
    }


    int NUMERO_SECRETO;
    srand(time(NULL));
    NUMERO_SECRETO = rand() %100;

    bool nao_acertou = true;
    int tentativas;
    double pontos = 1000.0;


   
    for (tentativas = 1; tentativas < numero_de_tentativas; tentativas++){
        
        int chute;
        double pontos_perdidos; 

        cout << "Essa e sua tentativa: " << tentativas << endl;

        cout << "Qual seu chute ? ";
        cin >> chute;
        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        pontos_perdidos = abs(chute- NUMERO_SECRETO)/2.0;
        pontos = pontos - pontos_perdidos;

        if(acertou){
            cout << "Seu chute esta certo, parabens!" << endl;
            nao_acertou = false;
            break;
        } 
        else if(maior){
            cout << "Seu chute foi maior."<< endl;
        } else {
            cout << "Seu chute, foi menor."<< endl;
        }
    }

    cout << "Fim de jogo." << endl;
    if (nao_acertou){
        cout << "Voce nao acertou. Tente novamente!" << endl;
    } else{
    cout << "O numero de tentativas e: " << tentativas << endl;
    cout.precision(2);
    cout << fixed;
    cout << "Seus pontos foram: " << pontos << endl; 
    }

    return 0;
}

