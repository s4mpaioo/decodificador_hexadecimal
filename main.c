#include <stdio.h>
#include <string.h>
#include "caractere.h"

int main() {

    int qtd_mensagens;

    printf("Insira a quantidade de mensagens interceptadas: ");
    scanf("%d", &qtd_mensagens);

    float b[qtd_mensagens];
    char mensagens[qtd_mensagens][101]; // Armazena as mensagens interceptadas

    for (int i = 0; i < qtd_mensagens; i++) {
        printf("Insira o valor de B: ");
        scanf("%f", &b[i]);

        getchar();

        printf("Insira a mensagem: ");
        fgets(mensagens[i], 101, stdin);
    }

    printf("\n--- | Mensagens decodificadas | ---\n");
    // Processamento (decodificação) das mensagens

    for (int i = 0; i < qtd_mensagens; i++) {
        decodificador (mensagens[i], b[i]); // Chamar a função decodificador para cada mensagem
    }

    return 0;
}