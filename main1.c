#include <stdio.h>
#include <math.h>

int soma(int a, int b) {
    int c;
    c = a + b;
    return c;

}
int main() {
    int a = 4, b = 5, c;
    c = soma(a,b);
    printf("Retorno da função: %d", c);

    return 0;
}

//int main() {
//    double d;
//    int i;
//    int a = 4, b = 5, c;
//    c = a + b;
//    printf("c = %d", c);
//
//    if (c >= 18) {
//        printf(" Maior\n");
//        printf(" Linha_2");
//    } else {
//        printf(" Menor\n");
//        printf(" Linha2");
//    }
//
//    for (i=1;i<3; i++) {
//        printf("%d \n",i);
//    }
//
//    // 3º ETAPA
//
//    d = pow(a,b);
//    printf("POTENCIA = %2.lf",d);
//
//    return 0;
//
//}

// 2º ETAPA

//int main() {
//    int i;
//
//    for (i=1;i<3; i++) {
//        printf("%d \n",i);
//    }
//
//    printf("%d",i);
//
//    return 0;
//}