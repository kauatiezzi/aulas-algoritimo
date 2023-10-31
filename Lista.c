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

E
