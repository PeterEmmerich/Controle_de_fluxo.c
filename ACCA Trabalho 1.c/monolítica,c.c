#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int main(){

    setlocale(LC_ALL,"portuguese");
    int posicao, a, b, fibonacci, i, fib;

    printf("===========================================================\n");
    printf("Escolha a posição do número de fibonacci que você quer ver.\nDigite 0 ou menos pra encerrar.\n");
    printf("===========================================================\n");

    inicio_programa:

    a = 0, b = 1, fibonacci = 0, i = 3, fib = 0;

    printf("Digite a posição de Fibonacci desejada: ");
    scanf("%d",&posicao);

    if(posicao == 1) {
        printf("Sua resposta é : 0\n\n");
        goto inicio_programa;
    } else if (posicao <= 1) {
        printf("Posição inválida, programa encerrado.\n\n");
        goto fim_do_codigo;
    }else if (posicao == 2) {
        printf("Sua resposta é : 1\n\n");
        goto inicio_programa;
    }else {

          loop_improvisado:

        if (posicao  >= 3) {
            fib = a + b;
            a = b;
            b = fib;


            if (i < posicao){
                i ++;
                goto loop_improvisado;
            }
            printf("Sua resposta é : %d\n\n", fib);
            goto inicio_programa;
        } else {
            printf("Valor invalido");
        }
    }
    fim_do_codigo:
    system("pause");
    return 0;
}
