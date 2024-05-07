#include <stdio.h>
#include <math.h>
int main() {

//    // CALCULE E ESCREVA A SOMA DOS J NUMEROS INTEIROS E CONSECULTIVOS CUKA SOMA DE SEUS QUADRADOS, RESULTE EM 2010. R 18,19,22
//
//    int v[5], a=1,b=2,c=3,d=4,e=5,i;
//
//    while(pow(a,2)+pow(b,2)+pow(c,2)+pow(d,2)+pow(e,2) != 2010){
//        a = b; b = c; c = d; d = e;
//        e++;
//    }
//
//    v[0] = a; v[1] = b; v[2] = c; v[3] = d; v[4] = e;
//
//    for(i =0; i < 5; i++) printf("%d ", v[i]);

// O NUMERO 3025 POSSUI A SEGUINTE CARACTERISTICA: 3025 -> 30+25; 30+25 = 55; 55^2 = 3025
// DESCUBRA QUAIS SAO OS OUTROS N ENTRE 1000 E 9999 QUE SATISFAZEM ESSA CATEGORIA
//
// int v[5], resto, quociente, soma, i, j=0;
//
// for(i = 1000; i<10000; i++) {
//
//     quociente = i / 100;
//     resto = i % 100;
//     soma = resto + quociente;
//
//     if(pow(soma,2) == i) {
//         v[j] = i;
//         j++;
//     }
// }
//
// for(i=0;i < j; i++) printf("%d ", v[i]);


    int v[200], i, j = 0, soma, k;

    for(i = 1; i<1000; i++) {
        for(k=1; k<i; k++){
            if(i%k == 0) {
                soma = soma + k;
            }
        }

        if(soma == i){
            v[j] = i;
            j++;
        }
    }

    for (i=0;i<j;i++) {
        printf("%d", v[i]);
    }
}
