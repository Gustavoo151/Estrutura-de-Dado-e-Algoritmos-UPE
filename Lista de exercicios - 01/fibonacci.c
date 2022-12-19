#include <stdio.h>

int fibonacci(int num){
    int soma = 2, aux = 0;


    if(num == 1)
        return 0;

    else if (num == 2)
        return 1;    

    else
        for (int i = 2; i < num; i++){
            aux = soma;
           // printf("Soma antes: %d\n", soma);
            soma =  aux + soma;
           // printf("Soma depois: %d\n\n", soma);
            
        }

    return soma;
}

int main(){

    printf("Resultado: %d \n ", fibonacci(5));

    return 0;
}