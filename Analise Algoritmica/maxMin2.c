#include  <stdio.h>

void MaxMin1(int V[], int n, int *Max, int *Min){

    *Max = V[0], *Min = V[0];

    for(int i = 1; i < n; i++){     // Análise algoritmica
                                    // Pior caso -> 2(n - 1)
        if(V[i] > *Max)             // Caso Médio -> 2(n -1) + (n -1) = (3n-3)/2  --> O caso médio será a soma entre o melhor
            *Max = V[i];            // e o pior caso.
        else if(V[i] < *Min)        // Melhor caso -> (n - 1)
            *Min = V[i];
    }
}

int main(){

    int arranjo[9] = {1,2,3,0,5,6,7,8,9};

    int *max = 0, *min = 0;

    printf("Max: %d Min: %d\n", max, min);

    MaxMin1(arranjo, 9, &max, &min);

    printf("Max: %d Min: %d", max, min);


    return 0;
}