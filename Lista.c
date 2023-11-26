1) Escrever um programa que gere aleatoriamente números entre 0 e 100. Ao gerar o número 50, o programa deverá ser
encerrado, imprimindo na tela uma mensagem informando a quantidade de números que foram gerados. // Joao

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



2) Escrever um programa que gere 1000 números aleatórios entre 1 e 6. Em seguida calcule e escreva a quantidade e o
percentual de cada número gerado. // Joao

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





3) Duas montadoras competem pelo mercado de carros populares. A montadora A possui uma produção de 300
carros/dia e um crescimento anual de 10%. A montadora B, de produção menor (100 carros/dia), possui um
crescimento anual maior (15%). Determinar o número de anos necessários para que a montadora B ultrapasse o
número de carros produzidos por dia pela montadora A.

void main() {

    int A = 300, B = 100, Anos = 0;

    do {

        A = A + (A * 0.1);
        B = B + (B* 0.15);
        Anos++;

    } while(A>B);

    printf("%d", Anos);

}




4) Uma empresa produziu no ano de 2005 10.000 unidades de um produto que é vendido por R$5,00 a unidade.
Sabendo-se que o aumento anual da produção é de 15% e que a estimativa de aumento anual do preço do produto é
de 2.5% ao ano. Calcule e imprima a produção anual em 2010 e o valor de venda do produto.


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



5) O diretor de um orfanato deseja um programa que permita cadastrar todos os internos a fim de obter o seguinte
relatório:
 Número de crianças do sexo masculino e feminino.
 Número de crianças com idade entre 0 e 2 anos.
 Percentual de crianças acima de 16 anos.
 Percentual de meninas com 17 anos.
O cadastro de internos deverá ser encerrado se for digitada uma idade maior que 17.

    

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
        scanf(" %c", &sexo);  // Adicione um espaço antes de %c para consumir qualquer caractere de nova linha


        if (sexo == 'M') {
            qtdm++;
        } else {
            qtdf++;
        }

        if (idade <= 2) {
            qtd02++;
        }

        if (idade > 16) {
            qtd16++;
        }

        if (sexo == 'F' && idade == 17) {
            qntf17++;
        }

        total++;
    } while (idade != 18);

    printf("Masculino = %d\n", qtdm);
    printf("Feminino = %d\n", qtdf);
    printf("Crianças = %d\n", qtd02);

    x = qtd16 * 100.0 / total;
    printf("Quantidade de crianças acima de 16 = %lf\n", x);

    x = qntf17 * 100.0 / total;
    printf("Quantidade de meninas com 17 anos = %lf\n", x);
}



06 - Um empresário decidiu dar um aumento salarial a seus n empregados adotando o seguinte critério: os funcionários que
recebem até R$200,00 receberão um aumento de 20%; os que recebem até R$500,00, 15% e o restante, 10%. Esse
programa deverá ler o salário atual do empregado e, em seguida, efetuar o aumento. O programa encerra-se quando
for digitado um salário igual a zero

#include <stdio.h>

void main() {

    float salario, r1 = 1.20, r2 = 1.15, r3 = 1.10;

    do {

        printf("Digite o valor do salario:\n");
        scanf("%f", &salario);

        if(salario == 0) {
            printf("Insira um salario maior que R$ 0,00");
        } else {
        if(salario <=200) {


            salario = salario * r1;
        } else if (salario <=500) {

            salario = salario * r2;
        } else
            salario = salario * r3;

        printf("O salario e de: R$ %.2f\n", salario);

    }

    } while(salario > 0);
    
}



7) Escrever um programa que calcule e imprima todos os números entre 320 e 360 que possuam a seguinte
característica: Retirando-se o primeiro dígito à esquerda, este servirá como divisor dos demais dígitos. Por exemplo: O
número 324. Retirando se o 3, verifica-se que 24 pode ser divido por 3. Imprima ainda a quantidade de números
gerados


#include <stdio.h>
int main() {
    int i, numero, qtde_nums = 0, primeiroDigito;

    printf("Numeros entre 320 e 360:\n");

    for(i = 320; i <= 360; i++) {
        numero = i;
        primeiroDigito = numero / 100;  // Obter o primeiro dígito à esquerda

        // Retirar o primeiro dígito à esquerda do número
        numero = numero % 100;

        if(numero % primeiroDigito == 0) {
            printf("%d, ", i);
            qtde_nums++;
        }
    }

    printf("\nQuantidade de numeros gerados: %d\n", qtde_nums);

    return 0;
}



8) Escrever um programa que calcule o valor do fatorial de um número digitado pelo usuário.


#include <stdio.h>

int main() {
    int numero, fatorial = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; i++) {
        fatorial = fatorial * i;

    }

    printf("O fatorial de %d eh: %d\n", numero, fatorial);
    return 0;
}



9) Escrever um programa que calcule e imprima o número de grãos de trigo necessários para preencher um tabuleiro de
xadrez da seguinte forma: no primeiro quadrado coloca-se 20 grãos, no segundo quadrado coloca-se 21 no terceiro 22
e assim sucessivamente até preencher as 64 casas do tabuleiro.

#include <stdio.h>

int main() {
    int i, total_graos = 0, graos = 20;

    printf("i\tQuantidade de grãos\n");

    for (i = 1; i <= 64; i++) {
        total_graos = total_graos + graos;
        graos++;  // Aumenta a quantidade de grãos para o próximo i    }
    }
    printf("\nTotal de grãos necessários: %d\n", total_graos);

    return 0;
}




10) Escrever um programa que calcule e escreva cinco inteiros positivos e consecutivos cuja soma dos quadrados seja
igual a 2010

#include <stdio.h>
#include <math.h>

int main() {
    int a=0;

    do{
        a=a+1;
    } while(pow(a,2)+pow(a+1,2)+pow(a+2,2)+pow(a+3,2)+pow(a+4,2)!=2010);

    printf("%d %d %d %d %d", a, a+1, a+2, a+3, a+4);
}



11) Escrever um programa que calcule e imprima quais são os cinco números inteiros e ímpares e consecutivos que
somados resultem no número 565

#include <stdio.h>


int main() {
    int a=-1;

    do{
        a=a+2;
    } while(a+a+2+a+4+a+6+a+8!=565);

    printf("%d %d %d %d %d", a, a+2, a+4, a+6, a+8);

    return 0;
}




12) O número 3025 possui as seguintes características:
 30+25=55
 55**2=3025
Calcule e imprima todos os números entre 1000 e 9999 que possuam essa característica

#include <stdio.h>
#include <math.h>

int main() {
    int resto, quociente, i;

    for (i=1000; i<=9999; i++){
        resto=i%100;
        quociente=i/100;

        if(pow(resto+quociente,2)==i) printf("%d\n", i);
    }

    return 0;
}



13) Escrever um programa que calcule e imprima todos os divisores de um número digitado pelo usuário.

#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Os divisores de %d sao:\n", numero);

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}


14) Escrever um programa que imprima todos os números perfeitos entre 1 e 1000. Um número é dito perfeito quando a
soma de seus divisores (exceto ele mesmo) resulta nele. Exemplo: 6=1+2+3.

#include <stdio.h>

int main() {
    int i, j, soma;

    printf("Numeros perfeitos entre 1 e 1000:\n");

    for (i = 1; i <= 1000; i++) {
        soma = 0;

        // Verifica os divisores próprios e os soma
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                soma += j;
            }
        }

        // Se a soma dos divisores próprios for igual ao número, imprime como perfeito
        if (soma == i) {
            printf("%d\n", i);
        }
    }

    return 0;
}





15) Escrever um programa que calcule e escreva todos os pares de números na faixa entre 1 e 10.000 que possuam a
seguinte característica: Por exemplo, a soma dos divisores positivos de 220 (com exceção dele próprio) resulta em 284
e a soma dos divisores positivos de 284 (com exceção dele próprio) resulta em 220.


#include <stdio.h>

int main() {
    int i, j, k, soma, soma1;

    for (i = 1; i <= 10000; i++) {
        soma = 0;

        // Calcula a soma dos divisores próprios de i
        for (j = 1; j < i; j++) {
            if (i % j == 0) {
                soma = soma + j;
            }
        }

        // Calcula a soma dos divisores próprios de soma
        soma1 = 0;
        for (k = 1; k < soma; k++) {
            if (soma % k == 0) {
                soma1 = soma1 + k;
            }
        }

        // Verifica se i e soma1 sao numeros amigos
        if (i == soma1 && i != soma) {
            printf("%d e %d sao numeros amigos\n", i, soma);
        }
    }

    return 0;
}



16) Escrever um programa que calcule e imprima o mdc (máximo divisor comum) e o mmc (mínimo múltiplo comum) dos números 36 e 21. (Resposta: 3 e 252)

#include <stdio.h>

int main() {
    int num1 = 36, num2 = 21, a = num1, b = num2, temp, mdc, mmc;

    // Calcula o MDC
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    mdc = a;

    // Calcula o MMC
    mmc = (num1 * num2) / mdc;

    // Imprime os resultados
    printf("MDC de %d e %d: %d\n", num1, num2, mdc);
    printf("MMC de %d e %d: %d\n", num1, num2, mmc);

    return 0;
}



17) Escrever um programa que calcule e imprima todos os números entre 1 e 30 que possuam a seguinte característica:
8**3=512 e 5+1+2=8. 

#include <stdio.h>

int main() {

    int i, resultado, somaDigitos, tempNum;
    for (i = 1; i <= 30; ++i) {
        resultado = i * i * i;

        // Verifica se o resultado é igual a 512
        if (resultado == 512) {
            // Calcula a soma dos dígitos
            somaDigitos = 0;
            tempNum = i;

            while (tempNum != 0) {
                somaDigitos += tempNum % 10;
                tempNum /= 10;
            }

            // Verifica se a soma dos dígitos é igual a i
            if (somaDigitos == i) {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}



18) Escrever um programa que verifique se um número lido pelo teclado é primo.

    
#include <stdio.h>

int main() {
    int numero, ehPrimo = 1;  // Inicialmente, assume-se que o numero e primo

    // Solicita o numero ao usuário
    printf("Digite um numero: ");
    scanf("%d", &numero);

    // Verifica se o numero e menor ou igual a 1
    if (numero <= 1) {
        ehPrimo = 0;  // numeros menores ou iguais a 1 nao são primos
    } else {
        // Loop para verificar se o numero e divisível por algum numero entre 2 e a raiz quadrada
        for (int i = 2; i * i <= numero; ++i) {
            if (numero % i == 0) {
                ehPrimo = 0;  // Se for divisível, nao e primo
                break;        // nao e necessário continuar verificando
            }
        }
    }

    // Exibe o resultado
    if (ehPrimo) {
        printf("%d e um numero primo.\n", numero);
    } else {
        printf("%d nao e um numero primo.\n", numero);
    }

    return 0;
}


19) Escrever um programa que calcule e imprima todos os números entre 20 e 30 que possam ser obtidos por meio da
soma de 2 números primos. Por exemplo: 25 pode ser obtido pela soma de 2 e 23. (Resposta: 20, 21, 22, 24, 25, 26,
28 e 30)


#include <stdio.h>

int main() {
    printf("Numeros entre 20 e 30 que podem ser obtidos pela soma de dois numeros primos:\n");

    for (int i = 20; i <= 30; ++i) {
        int encontrado = 0;

        for (int j = 2; j <= i / 2; ++j) {
            // Verifica se j e (i - j) são primos
            int jPrimo = 1;
            for (int k = 2; k * k <= j; ++k) {
                if (j % k == 0) {
                    jPrimo = 0;
                    break;
                }
            }

            int iMinusJPrimo = 1;
            for (int k = 2; k * k <= (i - j); ++k) {
                if ((i - j) % k == 0) {
                    iMinusJPrimo = 0;
                    break;
                }
            }

            // Se ambos j e (i - j) são primos, o número foi encontrado
            if (jPrimo && iMinusJPrimo) {
                encontrado = 1;
                break;
            }
        }

        if (encontrado) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}





20) Quais são os números inteiros entre 10 e 1000 iguais ao dobro do produto de seus algarismos? Por exemplo, o
número 36. Seus algarismos são 3 e 6 e o produto entre eles é 18. Portanto, o dobro de 18 é igual a 36, ou seja, o
próprio número. 

#include <stdio.h>

int main() {
    printf("Numeros entre 10 e 1000 iguais ao dobro do produto de seus algarismos:\n");

    for (int i = 10; i <= 1000; ++i) {
        // Separa os algarismos
        int digito1 = i / 10;
        int digito2 = i % 10;

        // Calcula o produto dos algarismos e o dobro
        int produto = digito1 * digito2;
        int dobroProduto = 2 * produto;

        // Verifica se o número é igual ao dobro do produto
        if (i == dobroProduto) {
            printf("%d ", i);
        }
    }

    printf("\n");

    return 0;
}

