#include <stdio.h>

/*Algoritmo com complexidade (2n - 1). Em notação assintotica fica O(n)*/



void maiorMenor(int vet[], int tamVet){
    int maior = vet[0], segundoMaior = 0;

    if (tamVet < 1){
        maior = vet[0];
        segundoMaior = vet[0];
    }
    else{
        for(int i = 1; i < tamVet; i++){
            if (maior < vet[i])
                maior = vet[i];
            }
        for(int j= 0; j < tamVet; j++){
            if ((segundoMaior < vet[j]) && (vet[j] < maior)){
                segundoMaior = vet[j];
            }
        }
    }
}


int main(){

    int tamVet;
    int vet[] = {10000,3,40,5000,600,100, 10};  // {N e I || N > 0}

    tamVet = sizeof(vet) / sizeof(vet[0]);  // Pegando o tamanho do vetor

    maiorMenor(vet, tamVet);

    return 0;
}