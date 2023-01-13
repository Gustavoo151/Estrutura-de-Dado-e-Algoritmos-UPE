#include <stdio.h>

int fibonacci(int n){
    printf("a\n");
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}


int main(){
    int num = 8;

    printf("%d", fibonacci(num));
    return 0;
} 

