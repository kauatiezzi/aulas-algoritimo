#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_FUNCIONARIOS 100

typedef struct {
    int id;
    char nome[50];
    double salario;
    int quantidade_filhos;

} Funcionario;

Funcionario funcionarios[MAX_FUNCIONARIOS];

void RegistrarFuncionario(int num_funcionario, int max_funcionario) {

    if (num_funcionario >= max_funcionario) {
        printf("Limite de funcionarios atingido!\n");
        return;
    }

    printf("Digite o nome do funcionario %d: ", num_funcionario + 1);
    scanf(" %[^\n]%*c", funcionarios[num_funcionario].nome);

    printf("Digite o salario do funcionario %d: ", num_funcionario + 1);
    scanf("%lf", &funcionarios[num_funcionario].salario);

    printf("Digite a quantidade de filhos do funcionario %d: ", num_funcionario + 1);
    scanf("%d", &funcionarios[num_funcionario].quantidade_filhos);

    funcionarios[num_funcionario].id = num_funcionario + 1;
    printf("Funcionario registrado com sucesso!\n");

}

void EliminarFuncionario(int* num_funcionario) {
    int id;
    printf("Digite o ID do funcionario que deseja eliminar: ");
    scanf("%d", &id);

    for (int i = 0; i < *num_funcionario; i++) {
        if (funcionarios[i].id == id) {
            for (int j = i; j < *num_funcionario - 1; j++) {
                funcionarios[j] = funcionarios[j + 1];
            }
            (*num_funcionario)--;
            printf("Funcionario removido com sucesso!\n");
            return;
        }
    }

    printf("Funcionario nao encontrado!\n");
}

void AlterarFuncionario(int num_funcionario) {

    int id;
    printf("Digite o ID do funcionario que deseja alterar: ");
    scanf("%d", &id);

    for (int i = 0; i < num_funcionario; i++) {
        if (funcionarios[i].id == id) {
            printf("Digite o novo nome do funcionario: ");
            scanf(" %[^\n]%*c", funcionarios[i].nome);

            printf("Digite o novo salario do funcionario: ");
            scanf("%lf", &funcionarios[i].salario);

            printf("Digite a nova quantidade de filhos do funcionario: ");
            scanf("%d", &funcionarios[i].quantidade_filhos);

            printf("Funcionario alterado com sucesso!\n");
            return;
        }
    }
    printf("Funcionario nao encontrado!\n");
}

bool VerificarFuncionarios(int num_funcionarios) {
    if (num_funcionarios == 0) {
        printf("Nenhum funcionario registrado. Por favor, registre pelo menos um funcionario primeiro.\n");
        return true; // Indica que não existem funcionários
    }
    return false; // Indica que existem funcionários
}

int main() {
    int num_funcionarios = 0, i = 0, opcao;
    double soma = 0.0,maior_salario = 0.0, menor_salario= 0.0;

    do {
        printf("\nMenu de Opcoes para o gerenciamento de funcionarios:\n");
        printf("1) Eliminar um Registro\n");
        printf("2) Alterar um Registro\n");
        printf("3) Incluir um Registro *FEITO*\n");
        printf("4) Listar todos os registros FEITO\n");
        printf("5) Listar apenas os registros que possuam funcionários com mais de 2 filhos\n");
        printf("6) Retornar a soma de todos os salarios da empresa\n");
        printf("7) Retornar o maior salário\n");
        printf("8) Retornar o menor salário\n");
        printf("9) Aumentar o salario dos funcionários que possuem salario abaixo de R$1000,00 em 10%.\n");
        printf("Digite 0 para sair do menu.\n");
        printf("Selecione uma opcao:\n");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (VerificarFuncionarios(num_funcionarios)) {
                } else {
                    EliminarFuncionario(&num_funcionarios);
                }
                break;
            case 2:
                if (VerificarFuncionarios(num_funcionarios)) {
                } else {
                    AlterarFuncionario(num_funcionarios);
                }
                break;
            case 3:
                // REGISTRAR FUNCIONARIO
                RegistrarFuncionario(num_funcionarios++, MAX_FUNCIONARIOS);
                break;
            case 4:
                // EXIBIR FUNCIONARIOS
                if (VerificarFuncionarios(num_funcionarios)) {
                } else {
                    for (i = 0; i < num_funcionarios; i++) {
                        printf("ID: %d | Nome: %s | Salario: %.2lf | Filhos: %d\n",
                               funcionarios[i].id, funcionarios[i].nome,
                               funcionarios[i].salario, funcionarios[i].quantidade_filhos);
                    }
                }
                break;
            case 5:
                if (VerificarFuncionarios(num_funcionarios)) {
                } else {
                    // EXIBIR FUNCIONARIOS COM DOIS FILHOS
                    for (i = 0; i < num_funcionarios; i++) {
                        if (funcionarios[i].quantidade_filhos >= 2) {
                            printf("\nID: %d | Nome: %s | Salario: %.2lf | Filhos: %d\n",
                                   funcionarios[i].id, funcionarios[i].nome,
                                   funcionarios[i].salario, funcionarios[i].quantidade_filhos);
                        }
                    }
                }
                break;
            case 6:
                // SALARIO TOTAL
                if (VerificarFuncionarios(num_funcionarios)) {
                } else {
                    for (i = 0; i < num_funcionarios; i++) {
                        soma = soma + funcionarios[i].salario;
                    }
                    printf("\nSalario total: %2lf", soma);
                }
                break;
            case 7:
                // MAIOR SALARIO
                if (VerificarFuncionarios(num_funcionarios)) {
                } else {
                    maior_salario = funcionarios[0].salario;

                    for (i = 0; i < num_funcionarios; i++) {
                        if (maior_salario < funcionarios[i].salario) {
                            maior_salario = funcionarios[i].salario;
                        }
                    }
                    printf("\nMaior salario: %2lf", maior_salario);
                }
                break;
                // MENOR SALARIO
            case 8:
                if (VerificarFuncionarios(num_funcionarios)) {
                } else {
                    menor_salario = funcionarios[0].salario;

                    for (i = 0; i < num_funcionarios; i++) {
                        if (menor_salario > funcionarios[i].salario) {
                            menor_salario = funcionarios[i].salario;
                        }
                    }
                    printf("\nMenor salario: %2lf", menor_salario);
                }
                break;
                // APLICAR 10% NO SALARIOS ABAIXO DE 1000
            case 9:
                if (VerificarFuncionarios(num_funcionarios)) {
                } else {
                    for (i = 0; i < num_funcionarios; i++) {
                        if (funcionarios[i].salario < 1000) {
                            funcionarios[i].salario = funcionarios[i].salario * 1.10;
                        }
                    }
                    printf("Salarios atualizados com sucesso, veja abaixo a lista de todos os funcionarios ja com o salario atualizado.\n");
                    for (i = 0; i < num_funcionarios; i++) {
                        printf("ID: %d | Nome: %s | Novo salario: %.2lf | Filhos: %d\n",
                               funcionarios[i].id, funcionarios[i].nome,
                               funcionarios[i].salario, funcionarios[i].quantidade_filhos);
                    }
                }
                break;
            case 0:
                printf("Saindo do programa...");
                break;
            default:
                printf("Opcao invalida! Por favor, escolha uma opcao valida.\n");
        }

    } while (opcao != 0);

    return 0;
}

