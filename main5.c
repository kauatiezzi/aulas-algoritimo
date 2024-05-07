////3.1
//
//#include <stdio.h>
//
//void main() {
//    double v[30], n = 1.0, d=2.0, soma = 0.0;
//    int linha;
//
//    for(linha=0; linha<30; linha++) {
//        v[linha] = n / d;
//
//        soma = soma + v[linha];
//        n = n+1;
//        d= d+1;
//    }
//
//    for(linha=0; linha<30; linha++){
//        printf("\nv[%d] = %.2lf\n", linha, v[linha]);
//    }
//
//    printf("Somatorio = %.2lf", soma);
//}

//3.2

//#include <stdio.h>
//
//void main() {
//    double v[30], n = 1.0, d=2.0, soma = 0.0;
//    int sinal = 1;
//    int linha;
//
//    for(linha=0; linha<30; linha++) {
//        v[linha] = n / d * sinal;
//
//        soma = soma + v[linha];
//        n = n+1;
//        d= d+1;
//        sinal = sinal * (-1);
//    }
//
//    for(linha=0; linha<30; linha++){
//        printf("\nv[%d] = %.2lf\n", linha, v[linha]);
//    }
//
//    printf("Somatorio = %.2lf", soma);
//}

//3.3
//#include <stdio.h>
//
//void main() {
//    double v[30], n = 1.0, d=2.0, soma = 0.0;
//    int linha, j=1.0, k=0.0;
//
//    while(j<=5) {
//        for(linha=0; linha<j; linha++) {
//            v[k++] = n / d;
//            soma= soma + v[k-1];
//            n = n +1;
//            d = d +1;
//        }
//        for(linha=0; linha<j; linha++) {
//            v[k++] = -n / d;
//            soma= soma + v[k-1];
//            n = n +1;
//            d = d +1;
//        }
//        j++;
//    }
//
//        for(linha=0; linha<30; linha++){
//        printf("\nv[%d] = %.2lf\n", linha, v[linha]);
//    }
//
//    printf("Somatorio = %.2lf", soma);
//
//}

//Matriz

#include <stdio.h>
void main() {
    
    int linha, coluna;
    
    int m[2][4];
    
    m[0][0] = 5;
    m[1][0] = 7;
    m[0][1] = 6;
    m[1][1] = 8;
    m[0][2] = 9;
    m[1][2] = 10;
    m[0][3] = 11;
    m[1][3] = 12;
    
    for (linha = 0; linha <=1; linha++) {
        for (coluna = 0; coluna <=3; coluna++)
            printf("%d ", m[linha][coluna]);

        printf("\n");
    }
    
}