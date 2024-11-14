#include <stdio.h>
#include <string.h>

#define MAX 5

typedef struct {
    char nome[30]; 
} Paciente;

typedef struct {
    Paciente fila[MAX]; 
    int inicio;
    int fim;
    int quantidade;
} FilaCircular;

void inicializarFila(FilaCircular* fila) {
    fila->inicio = -1;
    fila->fim = -1;
    fila->quantidade = 0;
}

int estaCheia(FilaCircular* fila) {
    return fila->quantidade == MAX;
}

int estaVazia(FilaCircular* fila) {
    return fila->quantidade == 0;
}

void enfileirar(FilaCircular* fila, Paciente valor) {
    if (estaCheia(fila)) {
        printf("Fila cheia!\n");
        return;
    }

    if (fila->inicio == -1) {
        fila->inicio = 0; 
    }

    fila->fim = (fila->fim + 1) % MAX;

    
    strcpy(fila->fila[fila->fim].nome, valor.nome);

    fila->quantidade++;
    printf("'%s' enfileirado com sucesso.\n", valor.nome);
}

void adicionarPaciente(FilaCircular* fila, Paciente nome) {
    if (estaCheia(fila)) {
        printf("Fila cheia, volte mais tarde!\n");
    } else {
        enfileirar(fila, nome);
    }
}

void exibirFilaDePacientes(FilaCircular* fila) {
    if (estaVazia(fila)) {
        printf("A fila está vazia.\n");
        return;
    }

    printf("Pacientes na fila:\n");
    int i = fila->inicio;
    for (int count = 0; count < fila->quantidade; count++) {
        printf("%s\n", fila->fila[i]);
        i = (i + 1) % MAX;  
    }
}

void chamarPacienteParaAtendimento(FilaCircular* fila) {
    if (estaVazia(fila)) {
        printf("Fila vazia!\n");
        return;
    }

    printf("Chamando o paciente: %s\n", fila->fila[fila->inicio]);
    fila->inicio = (fila->inicio + 1) % MAX;  
    fila->quantidade--;

    
    if (estaVazia(fila)) {
        fila->inicio = -1;
        fila->fim = -1;
    }
}

Paciente desenfileirar(FilaCircular* fila) {
    Paciente pacienteRemovido;
    if (estaVazia(fila)) {
        printf("Fila vazia! Nenhum paciente para atender.\n");
        strcpy(pacienteRemovido.nome, "");  // Retorna um paciente vazio
        return pacienteRemovido;
    }

    pacienteRemovido = fila->fila[fila->inicio];
    fila->inicio = (fila->inicio + 1) % MAX;
    fila->quantidade--;
    return pacienteRemovido;
}

void exibirMenu() {
    FilaCircular fila;
    inicializarFila(&fila);
    int opcao;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Adicionar paciente\n");
        printf("2. Chamar paciente para atendimento\n");
        printf("3. Exibir fila de pacientes\n");
        printf("0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: {
                Paciente novoPaciente;
                printf("Digite o nome do paciente: ");
                scanf("%s", novoPaciente.nome);
                enfileirar(&fila, novoPaciente);
                break;
            }
            case 2: {
                Paciente paciente = desenfileirar(&fila);
                if (strcmp(paciente.nome, "") != 0) {
                    printf("Paciente %s foi chamado para atendimento.\n", paciente.nome);
                }
                break;
            }
            case 3:
                exibirFilaDePacientes(&fila);
                break;
            case 0:
                printf("Saindo do sistema.\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 0);
}

int main(){
    exibirMenu();
    return 0;

}