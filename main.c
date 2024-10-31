#include <stdio.h>

int main() {
    char nome[50]; /* Declara variável para armazenar um nome */

    printf("Olá, mundo! Este é meu primeiro programa em C.\n");
    printf("Olá! Qual o seu nome?\n");
    scanf("%49s",nome); /* Captura o nome inserido pelo usuário */
    
    printf("Olá, %s! Seja bem-vindo ao mundo da programação em C!\n", nome);
    return 0;

}
