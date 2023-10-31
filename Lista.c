Exercicio 1 // Joao



Exercicio 3 

void main() {

    int A = 300, B = 100, Anos = 0;

    do {

        A = A + (A * 0.1);
        B = B + (B* 0.15);
        Anos++;

    } while(A>B);

    printf("%d", Anos);

}

Exercicio 5 

#include <stdio.h>

void main() {

    char sexo;
    int idade, qtdm = 0, qtdf = 0, qtd02 = 0, qtd16 = 0, qntf17 = 0, total = 0;
    double x;

     do {

         printf("Digite a idade: \n");
         fflush(stdin);
         scanf("%d", &idade);

         printf("Digite o sexo(M/F):\n");
         scanf("%c", &sexo);

         if (sexo == 'm') {
             qtdm++;
         } else {
             qtdf++;
         }

         if(idade <=2) {
             qtd02++;
         }

         if(idade>16) {
             qtd16++;
         }

         if(sexo == 'f' && idade == 17) {
             qntf17++;
         }

         total++;
    } while(idade<18);

     printf("Masculino = %d", qtdm);
     printf("Feminino = %d", qtdf);
     printf("Crianças = %d", qtd02);

     x = qtd16 * 100.0 / total;
     printf("Quantidade de crianças acima de 16 = %lf", x);

     x = qntf17 * 100.0 / total;
     printf("Quantidade de meninas com 17 anos = %lf", x);



}
