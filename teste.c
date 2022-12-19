#include <stdio.h>


int main(){
    int n = 3; // Tamanho do vetor

    int vet[3] = {1,2,3};

    for(int i =0; i <3; i++)
        printf("%d ", vet[i]);

    printf("\n");

    vet[4] = 0;


    for(int i = 0; i < 8; i++)
        printf("%d ", vet[i]);

    return 0;
}