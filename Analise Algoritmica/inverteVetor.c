#include <stdio.h>

void InverteVetor(int V[9], int n){
    int i, temp;
                                  //  Alnálise algoritmica 
    for (i = 0; i < n/2; i++){    //  Pior case n/2
        temp = V[i];              //  Caso médio n/2
        V[i] = V[n - i - 1];      //  Melhor caso  n/2
        V[n- i - 1] = temp;
    }
}

int main(){
    int arranjo[9] = {1,2,3,4,5,6,7,8,9};   

    for(int i = 0; i < 9; i++)
        printf("%d ", arranjo[i]);
        
    InverteVetor(arranjo, 9);

    printf("\n");

    for(int i = 0; i < 9; i++)
        printf("%d ", arranjo[i]);
    
    return 0;
}