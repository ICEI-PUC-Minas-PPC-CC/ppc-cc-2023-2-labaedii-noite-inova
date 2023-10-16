#include <stdio.h>
#include "menu.h"

void exibirMenu(struct GerenciadorSenhas* gerenciador) {
    int opcao;

    while (1) {
        printf("Gerenciador de Senhas - Menu Principal\n");
        printf("1. Adicionar Conta\n");
        printf("2. Listar Contas\n");
        printf("3. Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                adicionarConta(gerenciador);
                break;
            case 2:
                listarContas(gerenciador);
                break;
            case 3:
                return;
            default:
                printf("Opaco invalida. Tente novamente.\n");
        }
    }
}

void adicionarConta(struct GerenciadorSenhas* gerenciador) {
    if (gerenciador->num_contas < MAX_CONTAS) {
        printf("Digite um nome de usuario: ");
        scanf("%s", gerenciador->contas[gerenciador->num_contas].username);
        printf("Digite a senha: ");
        scanf("%s", gerenciador->contas[gerenciador->num_contas].password);
        gerenciador->num_contas++;
        printf("Conta adicionada com sucesso!\n");
    } else {
        printf("Limite de contas alcancada. Nao foi possivel adicionar a conta.\n");
    }
}

void listarContas(const struct GerenciadorSenhas* gerenciador) {
    printf("Lista de Contas:\n");
    for (int i = 0; i < gerenciador->num_contas; i++) {
        printf("Conta %d:\n", i + 1);
        printf("Username: %s\n", gerenciador->contas[i].username);
        printf("Senha: %s\n", gerenciador->contas[i].password);
        printf("\n");
    }
}
