#include <stdio.h>  // Biblioteca de que serve para fezer os inputs e output
#include <stdlib.h>  // Biblioteca usada para fazer a alocação dinamica

typedef struct No{  // Criando estrutura para fazer a ligação dos nós
    int num;
    struct No *proximo;  // No que liga no proximo no
}no;


no* listaligadaSimples(int  num, no *listaSimples){  // Recebendo o numero como primeiro parametro e um ponteiro para um No nulo que vair ser o no final da estrutura
    no *ligar = malloc(sizeof(no));  // Alocando a memória necessária de cada No

    if(ligar){  // Verificando se a memoria foi alocada corretamente
        ligar->num = num;  // passando o valor de parametro num
        ligar->proximo = listaSimples; // Ligando o no atual ao nos anteriores
        return ligar;  // Retornando o primeiro No
    }
    else  // Se a memoria não foi alocada
        printf("Erro ao alocar memoria.");
    return NULL;  // Caso a memoria no seja alocada retorna NULL
}


void imprimir(no *lista){  // Recebe o ponteiro para o primeiro item da lista

    while(lista){  // Equanto o ponteiro não for nulo 
        printf("%d \n", lista->num);  // Imprimindo o valor atribuido ao no
        lista = lista->proximo;  // Tornando o No atual ser o próximo No
    }
}


int main(){
    int num, opcao = 1;
    no  *lista = NULL;  // No nulo que vai ser o último No da lista ligada 

    do {
        printf("1 - Para adcionar um novo valor\n2 - Para imprimir\n0 - sair\n");
        scanf("%d", &opcao);

        switch (opcao){
            case 1:
                printf("Digite um valor para ser adicionado na lista\n");
                scanf("%d", &num);
                lista = listaligadaSimples(num, lista);
                break;
            case 2:
                printf("Imprimindo lista:\n");
                imprimir(lista); 
                printf("\n\n");
                break;        
            case 0:
                return 0;
            default:
                printf("Valor inválido.\n");
        }
    }while (opcao != 0);

    return 0;
}