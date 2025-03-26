#include <stdio.h>
#include <string.h>


typedef struct {
    char nome[50];
    int idade;
    char tipo[20];
} Heroi;


void atacar(Heroi heroi) {
    char ataque[30];

    if (strcmp(heroi.tipo, "mago") == 0) {
        strcpy(ataque, "magia");
    } else if (strcmp(heroi.tipo, "guerreiro") == 0) {
        strcpy(ataque, "espada");
    } else if (strcmp(heroi.tipo, "monge") == 0) {
        strcpy(ataque, "artes marciais");
    } else if (strcmp(heroi.tipo, "ninja") == 0) {
        strcpy(ataque, "shuriken");
    } else {
        strcpy(ataque, "usou um ataque desconhecido");
    }

    printf("%s atacou usando %s\n", heroi.tipo, ataque);
}

int main() {
    Heroi heroi;

    
    printf("Digite o nome do herói: ");
    scanf("%s", heroi.nome);
    
    printf("Digite a idade do herói: ");
    scanf("%d", &heroi.idade);
    
    printf("Digite o tipo do herói (mago, guerreiro, monge, ninja): ");
    scanf("%s", heroi.tipo);

    
    atacar(heroi);

return 0;
}