#include<stdio.h>
#include<locale.h>

int main(){

    //caso base :
    int n, fibonacci;
    printf("Digite um número inteiro positivo:");
    scanf("%d", &n);
 /*
    fibonacci(0) = 0
    fibonacci(1) = 1

    //caso geral:
    fibonacci(n) = fibonacci(n-1) + fibonacci(n-2) */

    //função iterativa usa loop repetindo uma série de instruções até que uma condição seja atendida
        for (int i = n; i>=(n-2); i--){
            fibonacci(i) = fibonacci(i-1) + fibonacci(i-2);
        }
    //função recursiva chama ela mesma até que a condição seja atendida 
        function fibonacci(n){
            int n -= 2;
            for(int i = n)
        }
    return 0;
}
 


