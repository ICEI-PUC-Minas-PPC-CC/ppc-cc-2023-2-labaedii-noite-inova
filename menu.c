// main.c
#include <stdio.h>
#include "menu.h"

int main() {
    struct GerenciadorSenhas gerenciador;
    gerenciador.num_contas = 0;

    printf("Bem-vindo ao Gerenciador de Senhas!\n");

    exibirMenu(&gerenciador);

    return 0;
}
