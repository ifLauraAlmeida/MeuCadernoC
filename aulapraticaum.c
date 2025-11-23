#include <stdio.h>
#include <stdbool.h>

int main() {

    int n1;
    int n2;
    int n3;

    printf("Digite um numero: \n");
    scanf("%d", &n1);  // armazena n1

    printf("Digite outro numero: \n");
    scanf("%d", &n2); // armazena n2 

    printf("Só mais um número, juro que é o último:\n");
    scanf("%d", &n3); // armazena n3

    printf("Os três número são: %d, %d e %d.\n", n1, n2, n3 );

    //---- Calcula a soma dos 3 números.
    printf("CALCULANDO A SOMA DOS 3 NÚMEROS...\n");
    int soma = n1 + n2 + n3;
    printf("A soma dos três números é:  %d\n", soma);

    //----Calcula a subtração dos 3 números.
    printf("CALCULANDO A SUBTRAÇÃO DOS 3 NÚMEROS...\n");
    int subtracao = n1 - n2 - n3;
    printf("A subtração dos três números é: %d\n", subtracao);

    //----Calcula a multiplicação dos 3 números.
    printf("CALCULANDO A MULTIPLICAÇÃO DOS 3 NÚMEROS...\n");
    int multiplicacao = n1 * n2 * n3;
    printf("A multiplicação dos três números é: %d\n", multiplicacao);  

    //----Calcula a divisão dos 3 números.
    printf("CALCULANDO A DIVISÃO DOS 3 NÚMEROS...\n");
    int divisao = n1 / n2 / n3;
    printf("A divisão dos três números é: %d\n", divisao);

    //----Compara o primeiro número com o segundo número.
    if (n1 > n2){
        printf("%d é maior que %d\n", n1, n2);
    } else {
        printf("%d é maior que %d\n", n2, n1);
    }

    //----Compara o segundo número com o terceiro.
    if (n2 < n3){
        printf("%d é menor que %d\n", n2, n3);
    } else {
        printf("%d é menor que %d\n", n3, n2);
    }


    //----Imprime uma mensagem apenas se n1 for positivo e se n2 for par.
    bool n1_positivo = n1 >= 0;
    bool n2_par = n2 % 2 == 0;

    if (n1_positivo && n2_par) {
    printf("%d é positivo e %d é par\n", n1, n2);
    }


    return 0;
}