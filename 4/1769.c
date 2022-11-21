#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

// 174.713.777-47

int main() {
 
    char cpfString[25];
    int cpf[11];
    int rc;
    int i;
    int algarismo;

    rc = scanf("%s", cpfString);

    // printf("read: %s\n", cpfString);

    int idx = 0;
    for (i = 0; i < strlen(cpfString); i++)
    {
        algarismo = cpfString[i] - '0';

        if (algarismo >= 0)
        {
            cpf[idx] = algarismo;
            // printf("cpf[%i]: %i\n", idx, cpf[idx]);
            idx++;
        }
    }

    // teste 1;
    int j = 0;
    int somatorio = 0;
    int teste1 = 0;
    int teste2 = 0;
    for (j = 0; j < 11; j++)
    {   
        somatorio += cpf[j];
        // printf("cpf[%i]: %i\n", j, cpf[j]);
    }

    if (somatorio % 11 != 0)
    {
        printf("CPF invalido\n");
        exit(1);
    }

    for (j = 0; j < 9; j++)
    {   
        teste1 += cpf[j] * (j+1);
    }

    if (teste1 % 11 == 10)
    {
        if (cpf[9] != 0)
        {
            printf("CPF invalido");
            exit(1);
        }
    }
    else 
    {
        if (cpf[9] != teste1 % 11)
        {
            printf("CPF invalido");
            exit(1);
        }
    }

    for (j = 0; j < 9; j++)
    {   
        teste2 += cpf[10] * (9-j);
    } 

    if (teste2 % 11 == 10)
    {
        if (cpf[j] != 0)
        {
            printf("CPF invalido");
            exit(1);
        }
    }
    else 
    {
        if (cpf[10] != teste2 % 11)
        {
            printf("CPF invalido");
            exit(1);
        }
    }

    printf("CPF valido\n");

    return 0;
}