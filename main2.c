//// DADO O PROBLEMA: ESCREVA UM PROGRAMA QUE LEIA 3 NÚMEROS, CALCULE E IMPRIMA A SOMA
//
//#include <stdio.h>
//
//void main() {
//    int a, b, c, d;
//
//    printf("Digite o valor de A:\n");
//    scanf("%d",&a);
//    printf("\nDigite o valor de A:\n");
//    scanf("%d",&b);
//    printf("\nDigite o valor de A:\n");
//    scanf("%d",&c);
//
//    d = a+b+c;
//    printf("Soma= %d", d);
//    printf("%d %d %d", a, b, c);
//}


//// IMAGINE AGORA QUE A QUANTIDADE DE N AUMENTOU PARA 1000. COMO RESOLVE?
//
//#include <stdio.h>
//
//void main() {
//    int i, numero, soma=0;
//
//    for(i=1; i<=1000; i++) {
//        printf("Digite o %d número.", i);
//        scanf("%d", &numero);
//        soma = soma + numero;
//    }
//
//    printf("Soma = %d", soma);
//
//}

#include <stdio.h>

void main() {
    int divisorias = 3;
    int numero[divisorias];
    int i, soma=0;

    for(i=0; i<divisorias; i++) {
        printf("Digite o %d número.", i);
        scanf("%d", &numero[i]);
        soma = soma + numero[i];
    }

    printf("soma=%d", soma);
    printf("%d %d %d", numero[0], numero[1], numero[2]);

}