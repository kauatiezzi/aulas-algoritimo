Exercicio 1 // Joao

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {

    // Inicializa o gerador de números aleatórios com base no tempo atual
    srand(time(NULL));

    int numeroGerado;
    int contador = 0;

    do {
        // Gera um número aleatório entre 0 e 100
        numeroGerado = rand() % 101;

        // Incrementa o contador
        contador++;

        // Verifica se o número gerado é 50
        if (numeroGerado == 50) {
            printf("O número 50 foi gerado. Encerrando o programa.\n");
            break;
        }

    } while (1);  // Loop infinito, pois será encerrado quando o número 50 for gerado

    // Imprime a quantidade de números gerados
    printf("Quantidade total de números gerados: %d\n", contador);

}

Exercicio 2 // Joao

    #include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {

    int x, um = 0, dois = 0, tres = 0, quatro = 0, cinco = 0, seis = 0, numerogerado;
    float porc_um;


    srand(time(0));
    for (x=1;x<=1000;x++) {

        numerogerado = rand()%6+1;

        switch (numerogerado) {

            case 1: um++; break;
            case 2: dois++; break;
            case 3: tres++; break;
            case 4: quatro++; break;
            case 5: cinco++; break;
            case 6: seis++; break;

        }

    }

    porc_um = tres/10;
    printf("Quantidade de Um gerado: %d\n", um);
    printf("Porcentagem de um gerado: %f\n", um);

    porc_um = (dois / 1000) * 100;
    printf("Quantidade de Dois gerado: %d\n", dois);
    printf("Porcentagem de dois gerado: %f\n", dois);

    porc_um = (tres / 1000) * 100;
    printf("Quantidade de Tres gerado: %d\n", tres);
    printf("Porcentagem de tres gerado: %f\n", tres);

    porc_um = (quatro / 1000) * 100;
    printf("Quantidade de Quatro gerado: %d\n", quatro);
    printf("Porcentagem de Quatro gerado: %f\n", quatro);

    porc_um = (cinco / 1000) * 100;
    printf("Quantidade de Cinco gerado: %d\n", cinco);
    printf("Porcentagem de Cinco gerado: %f\n", cinco);




}





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

Exercicio 4


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {

    int ano1= 2005, ano5= 2010;
    float taxapreco = 2.5, taxaaumento = 1.5, producaoinicial = 10000, vunidade = 5;
    do {

        producaoinicial = producaoinicial * taxaaumento;
        vunidade = vunidade * taxapreco;
        ano1++;

    } while (ano1==ano5);

    printf("O preco em 2010 sera de: %1.f \n", vunidade);
    printf("A producao inicial sera em: %1.f", producaoinicial);

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
