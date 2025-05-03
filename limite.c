#include <stdio.h>
#include <limits.h>

int main()
{

    printf("Tabela de limites das variaveis inteiras\n");
    printf("--------------------------------------------\n");
    printf("| TIPO | -- | MINIMO | -- | MAXIMO | \n");
    printf("--------------------------------------------\n");
    printf("CHAR   |    %d        |      %d        \n", CHAR_MIN, CHAR_MAX);
    printf("INT    |    %d |   %d   \n", INT_MIN, INT_MAX);
    printf("SHRT   |    %d      |    %d      \n", SHRT_MIN, SHRT_MAX);
    printf("UINT   |    %5u       |   %15u    \n", 0, UINT_MAX);
    printf("LONG   |    %ld | %ld    \n", LONG_MIN, LONG_MAX);
    printf("ULONG  |    %u           |   %15u \n", 0, ULONG_MAX);
    printf("LLONG  |    %lld | %lld \n", LLONG_MIN, LLONG_MAX);
    printf("ULLONG |    %u           | %llu   \n", 0, ULLONG_MAX);
    printf("--------------------------------------------\n");

    printf("Exemplo de overflow da variavel: %d ", 654888888888892333333333333943058348530632); //test de buffer overflow
}