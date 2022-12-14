#include <stdio.h>

void MaxMin1(int V[], int n, int *Max, int *Min){
    *Max = V[0], *Min = V[0];

    for (int i = 1; i < n; i++){  // Análise algoritmica
        if (V[i] > *Max)          // Pior caso -> 2(n - 1)
           *Max = V[i];           // Caso  Médio -> 2(n - 1) 
                                  // Melhor caso -> 2(n - 1) 
        if (V[i] < *Min)
            *Min = V[i];    
    }
}


int main(){

    int *max = 0, *min = 0, tamArranjo = 9;  // Usando ponteiros para fazer a passagem por referência
    int arranajo[9] = {1,2,3,4,0,6,7,8,9};

    MaxMin1(arranajo, tamArranjo , &max, &min);

    printf("Max: %d - Min: %d", max, min);

    return 0;
}