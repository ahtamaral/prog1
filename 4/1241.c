#include <stdio.h>
#include <string.h>

void fits(char * A, char * B)
{

    int idxA, idxB;

    idxA = strlen(A);
    idxB = strlen(B);


    if (idxB > idxA)
    {
        printf("nao encaixa\n");
        return;
    }

    while (idxB >= 0)
    {
        if (A[idxA] != B[idxB])
        {   
            printf("nao encaixa\n");
            return;
        }

        idxA--;
        idxB--;
    }

    printf("encaixa\n");
    return;
}

int main() {
 
    int numberOfEntries;
    char A[1050], B[1050];
    char delim[] = " ";
    char buffer[2100];
    int textLen;

    scanf("%i\n", &numberOfEntries);
    
    
    int i;
    for (i = 0; i < numberOfEntries; i++)
    {
        fgets(buffer, 2100, stdin);
        textLen = strlen(buffer);
        buffer[textLen-1] = '\0';

        char *ptr = strtok(buffer, delim);

        int j = 0;
        while (ptr != NULL)
        {
            
            if (j == 0) {strcpy(A, ptr);}
            if (j == 1) {strcpy(B, ptr);}
            ptr = strtok(NULL, delim);
            j++;
        }

        fits (A, B);
        
    }


    return 0;
}

