#include <stdio.h>
#include "caractere.h"
#include <stdlib.h>
#include <string.h>

void decodificador(char codigo[101], float b) {
char auxiliar[3];
int mensagem[51];

    for (int i = 0; i < 100; i+= 2) {
        auxiliar[0] = codigo[i];
        auxiliar[1] = codigo[i + 1];
        auxiliar[2] = '\0';

        mensagem[i/2] = strtol(auxiliar, NULL, 16);
    }

    
    for (int i = 0; i < 51; i++) 
    {
        if(mensagem[i] == 0) {
            break; 
        }
        else if(func_val(i + 1, b) < 0) {
            continue; 
        }
        else {
            printf("%c", mensagem[i]);
        }
    }



    printf("\n");
}





