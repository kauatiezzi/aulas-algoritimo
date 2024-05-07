//// EXERCICIO 1
////  Escreva um programa em C que calcule a soma de todos os elementos em um vetor.
//
//#include <stdio.h>
//
//#define TAMANHO 5
//
//int main() {
//    int vetor[TAMANHO] = {1, 2, 3, 4, 5};
//    int soma = 0;
//
//    for (int i = 0; i < TAMANHO; i++) {
//        soma += vetor[i];
//    }
//
//    printf("A soma dos elementos do vetor é: %d\n", soma);
//
//    return 0;
//}
//
////EXERCICIO 2
////Escreva um programa em C que encontre o maior elemento em um vetor.
//
//#include <stdio.h>
//
//#define TAMANHO 6
//
//int main() {
//    int vetor[TAMANHO] = {10, 3, 7, 25, 16, 4};
//    int maior = vetor[0];
//
//    for (int i = 1; i < TAMANHO; i++) {
//        if (vetor[i] > maior) {
//            maior = vetor[i];
//        }
//    }
//
//    printf("O maior elemento do vetor é: %d\n", maior);
//
//    return 0;
//}
//
//
////EXERCICIO 3
//// Escreva um programa em C que calcule a média dos elementos em um vetor
//
//
//#include <stdio.h>
//
//#define TAMANHO 4
//
//int main() {
//    int vetor[TAMANHO] = {10, 20, 30, 40};
//    int soma = 0;
//
//    for (int i = 0; i < TAMANHO; i++) {
//        soma += vetor[i];
//    }
//
//    float media = (float)soma / TAMANHO;
//
//    printf("A média dos elementos do vetor é: %.2f\n", media);
//
//    return 0;
//}
