#include <stdio.h>

int fibinacci(int n){
    if ((n == 1) || (n == 2))
        return 1;
    
    else{
        int a = 1, b = 1, c = 0, soma = 2;

        for (int i = 2;  i < n; i++){
            c = a + b;
            a = b;
            b = c;
            soma += c;
        }
        return soma;
    }
}


int main() {

    int n;

    printf("Digite quantos termos da sequencia de Fibonacci voce quer:\n");
    scanf("%d", &n);

    
    printf("A soma da sequencia fibonacci de %d e: %d",n, fibinacci(n));
  return 0;
}