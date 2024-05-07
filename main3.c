//ESCREVER UM PROGRAMA QUE DEFINA UM VETOR COM 9 NUMEROS INTEIROS. FAÇA UMA VARREDURA NESSE VETOR VERIFICANDO SE OS NUMEROS SAO PARES OU IMPARES.
// SE OS NUMEROS FOR PAR, DEVERA SER TRANSFERIDO P O VETOR DENOMINADO PAR, SE IMPAR, PARA O VETOR IMPAR.

// IMPRIMA OS VETORES PAR E IMPAR.

//#include <stdio.h>
//int main(){
//
//    int par[9], impar[9], v[9] = {4,8,7,3,6,12,8,9,2};
//    int i,j=0,k=0;
//
//    for (i = 0; i<9; i++) {
//        if(v[i] % 2 == 0) {
//            par[j] = v[i];
//             j++;
//        } else {
//            impar[k] = v[i];
//              k++;
//        }
//    }
//
//    printf("Pares  \n");
//    for(i=0; i<j; i++)
//        printf("%d ", par[i]);
//
//    printf("\nImpares\n");
//
//    for(i=0; i<k; i++)
//        printf("%d ", impar[i]);
//
//    return 0;
//    }



// ESCREVA UMA FUNCAO QUE RETORNE O FATORIAL DE UM N INTEIRO ENVIADO COMO PARAMETRO.

#include <stdio.h>
#include <math.h>

double fat(int numero) {

    int fatorial = 1, i;
    for(i=1; i<numero; i++) {
        fatorial = fatorial * i;

    }
}

void main() {

    int numero = 5;
    double fatorial;
    fatorial = fat(numero);
    printf("Fatorial = %d ", fatorial);

}