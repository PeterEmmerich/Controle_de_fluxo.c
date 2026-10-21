#include<stdio.h>
#include<locale.h>

int fibonacci(int posicao){

    if (posicao==0)
        {return 0;}
    else if (posicao==1)
        {return 1;}
    else if (posicao<0){
        return -1;
    }
   return fibonacci(posicao-1) + fibonacci(posicao-2);
}
int main(){
    setlocale(LC_ALL,"Portuguese");
    int posicao;

    printf("===========================================================\n");
    printf("Escolha a posição do número de fibonacci que você quer ver.\nDigite 0 ou menos pra encerrar.\n");
    printf("===========================================================\n");

    while (1){

        printf("Digite qual posição do Fibonacci você quer: ");
        scanf("%d",&posicao);
        posicao -= 1;

        if(posicao < 0){
            break;
        }

        int fib = fibonacci(posicao);

        printf("O número é : %d\n\n", fib);
    }
    return 0;
}

