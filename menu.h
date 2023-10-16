#ifndef MENU_H
#define MENU_H

#include "structs.c"

void exibirMenu(struct GerenciadorSenhas* gerenciador);
void adicionarConta(struct GerenciadorSenhas* gerenciador);
void listarContas(const struct GerenciadorSenhas* gerenciador);

#endif
