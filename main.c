#include <stdio.h>
#include <string.h>

int main() {
    char nome[50]; /* Declara variável para armazenar um nome */

    printf("Olá, mundo! Este é meu primeiro programa em C.\n");
    
    printf("Olá! Qual o seu nome?\n");
    scanf("%49s",nome);
    
    if(strcmp(nome, "Ashogun") == 0) {
       printf("Saudações, Ashogun! é uma honra tê-lo aqui.\n");
    } else {
       printf("Olá, %s! Seja bem-vindo ao mundo da programação em C!\n", nome);
    }

    return 0;
}
