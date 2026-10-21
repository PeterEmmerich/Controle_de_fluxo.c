#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_ALL,"portuguese");

    printf("===========================================================\n");
    printf("Escolha a posição do número de fibonacci que você quer ver.\nDigite 0 ou menos pra encerrar.\n");
    printf("===========================================================\n");

    while (1){

    int n, i;
    int a = 0, b = 1;
    int fib = 0;
    //fibonacci iterativo + loop = laço de repetição



        printf("Digite qual posição do Fibonacci você quer: ");
        scanf("%d", &n);
        n -= 1;
        if(n == 0){
            fib = a;
        }else if(n == 1){
            fib = b;
        }else if (n>1){
            for (i=2 ; i<=n; i++){
                fib = (a) + (b);
                    a = b;
                    b = fib;
            }
        }else {
            printf("\nNúmero inválido, tente novamente\n");
            return 1;
        }
        printf("O valor de fibonacci é: %d\n\n", fib);

    }
        return 0;
}
