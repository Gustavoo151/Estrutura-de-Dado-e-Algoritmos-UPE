#include <stdio.h>

void alo (int *a){
        *a = 7;
    }

int main(){
    int *n = 11;

    
    alo(&n);

    printf("%i ", n);

    return 0;
}