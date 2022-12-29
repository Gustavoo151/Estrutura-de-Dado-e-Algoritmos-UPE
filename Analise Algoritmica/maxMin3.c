#include <stdio.h>

void aumentaArranjo(int V1[], int n){  // Função que aumenta mais um elemento no arranjo caso ele for ímpar
    int V[n+1];
    
        for (int i = 0; i < n; i++)
            V[n] = V1;      
        V[n+1] = V1[n];
}


void MaxMin3(int V[], int n, int *Max, int *Min){
    int i, fimDoAnel;

    if ((n % 2) > 0){
        aumentaArranjo(V, n);
        fimDoAnel = n;
    }
    else
        fimDoAnel = n - 1;

    if (V[0] > V[1]){
        *Max = V[0];
        *Min = V[1];
    }
    else{
        *Max = V[1];
        *Min = V[0];
    }

    i = 2;

    while(i <= fimDoAnel){
        if (V[i] > V[i+1]){
            if (V[i] > *Max)
                *Max = V[i];
            if (V[i+1] < *Min)
                *Min = V[i+1];
        }
        else{
            if (V[i] < *Min)
                *Min = V[i];
            if (V[i+1] > *Max)
                *Max = V[i+1];
        }
        i = i + 2;
    }
}


int main(){
    int *Max = 0, *Min = 0, tamArranjo;
    int arranjo[] = {100,2,3080, 100, 10, 1};

    tamArranjo = sizeof(arranjo) / sizeof(arranjo[0]);  // Pegando o tamanho do arranjo

    MaxMin3(arranjo, tamArranjo, &Max, &Min);
    
    printf("\nMaior: %d\nMenor: %d", Max, Min);

    return 0;
}