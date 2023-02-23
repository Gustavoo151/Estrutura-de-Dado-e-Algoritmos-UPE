#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int dado;
    struct tPilhaSimples *proximo;
}tPilhaSimples;


tPilhaSimples* CriaPilha(int novo){
    tPilhaSimples *topo;

    topo = malloc(sizeof(tPilhaSimples));
    topo->dado = novo;
    topo->proximo = NULL;

    return topo;
}


int PilhaVazia(tPilhaSimples *topo){
    if (topo == NULL)
        return 1;
    else
        return 0;
}


tPilhaSimples* Empilha(tPilhaSimples *topo, int novo){
    tPilhaSimples *novoTopo;

    novoTopo = malloc(sizeof(tPilhaSimples));

    if(novoTopo == NULL)
        return topo;

    novoTopo->dado = novo;
    novoTopo->proximo = topo;

    return novoTopo;
}


tPilhaSimples* Desempilha(tPilhaSimples *topo){
    tPilhaSimples *novoTopo;

    if(topo == NULL)
        return topo;
    
    novoTopo = topo->proximo;

    free(topo);
    return novoTopo;
}   

int main(){

    return 0;
}