#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int num;
    struct No *proximo;
}no;


void armazena(no *item, no **fim){
    
}

int main(){
    int num;
    no  *novo =  malloc(sizeof(no));

    if (novo){
        for (int i = 0; i < 3; i ++){
            scanf("%d", &num);
            novo->num = num;
            novo = novo->proximo;
        }
    }
    else
        printf("ERRO ao alocar memoria.");

    return 0;
}