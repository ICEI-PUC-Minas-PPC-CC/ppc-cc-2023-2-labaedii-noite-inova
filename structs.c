#include <string.h>

#define MAX_LEN 30
#define MAX_CONTAS 100

struct Conta {
    char username[MAX_LEN];
    char password[MAX_LEN];
};

struct GerenciadorSenhas {
    struct Conta contas[MAX_CONTAS];
    int num_contas;
};
