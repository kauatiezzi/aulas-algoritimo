//#include <stdio.h>
//
//void main() {
//    struct Registro{
//        int idade;
//        double salario;
//    };
//
//    struct Registro a, b;
//    a.idade = 50;
//    a.salario = 10000.0;
//    printf("%d", a.idade);
//    b.idade = 90;
//    b.salario = 8000.0;
//    printf("%lf ", b.salario);
//}

//#include <stdio.h>
//
//void main() {
//    typedef struct {
//        int idade;
//        double salario;
//    } Registro;
//
//    Registro a, b;
//    a.idade = 50;
//    a.salario = 10000.0;
//    printf("%d", a.idade);
//    b.idade = 90;
//    b.salario = 8000.0;
//    printf("%lf ", b.salario);
//}

#include <stdio.h>
#define MAX 100
#include <stdlib.h>
#include <time.h>
//void main() {
//    typedef struct {
//        int idade;
//        double salario;
//    } Registro;
//
//    Registro v[MAX];
//
//    v[0].idade = 50;
//    v[0].salario = 10000.0;
//    v[1].idade = 40;
//    v[1].salario = 80000.0;
//
//    printf("%d", v[0].idade);
//    printf("%lf", v[1].salario);
//}


void main() {

    int i=0, j;
    double menor_salario, maior_salario, media=0;

    typedef struct {
        int idade;
        double salario;
    } Registro;

    Registro v[MAX];

    while (i < MAX) {
        printf("Idade: ");
        scanf("%d", &v[i].idade);
        if(v[i].idade <0) break;
        printf("Salario: ");
        scanf("%lf", &v[i++].salario);
    }

    maior_salario = v[0].salario;
    menor_salario = v[0].salario;

    for(j=1; j<i; j++) {
        if(menor_salario > v[j].salario) {
            menor_salario = v[j].salario;
        }
        if(maior_salario < v[j].salario) {
            maior_salario = v[j].salario;
        }
    }

    for(j=0; j<i; j++){
        media = media + v[j].idade;
    }

    media = media / i;

    printf("%d\n", media);
    printf("%lf\n ", menor_salario);
    printf("%lf\n ", maior_salario);





}