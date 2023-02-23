#include <stdio.h>

void cont(int *num){
    *num += 1;
}


int main(int argsc, char *argsv[]){

    int *numero = 10;

    
    printf("%d\n", numero);
    
    cont(&numero);
    
    printf("%d\n", numero);

    return 0;
}