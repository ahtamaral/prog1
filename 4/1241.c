#include <stdio.h>
#include <string.h>

void fits(char * A, char * B)
{

    int idxA, idxB;

    // printf("Fits()\nA: %s\nB: %s\n", A, B);

    idxA = strlen(A);
    idxB = strlen(B);


    if (idxB > idxA)
    {
        printf("nao encaixa\n");
        return;
    }

    while (idxB >= 0)
    {

        // printf("A[%i]: %c == B[%i]: %c\n", idxA, idxB, A[idxA], B[idxB]);


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
    char A[1000], B[1000];
    char delim[] = " ";
    char buffer[2100];
    // int aux = 0;
    int textLen;
    // int b = 0;

    scanf("%i\n", &numberOfEntries);
    
    
    for (int i = 0; i < numberOfEntries; i++)
    {
        // printf("%ist test case\n", i);
        fgets(buffer, 2100, stdin);
        textLen = strlen(buffer);
        // printf("%i\n", textLen);
        buffer[textLen-1] = '\0';
        // printf("read: %s\n", buffer);

        char *ptr = strtok(buffer, delim);

        int j = 0;
        while (ptr != NULL)
        {
            // printf("'%s'\n", ptr);
            if (j == 0) {strcpy(A, ptr);}
            if (j == 1) {strcpy(B, ptr);}
            ptr = strtok(NULL, delim);
            j++;
        }



        // for (int i = 0; i < textLen; i++)
        // {
        //     // printf("%c %i ", buffer[i], b);
        //     if (buffer[i] == ' ')
        //     {
        //         // printf("space.\n");
        //         b = 1;
        //         A[i] = '\0';
        //     }
        //     else 
        //     {
        //         if (b == 0)
        //         {
        //             A[i] = buffer[i];
        //             aux++;
        //             // printf("A[%i]: %c\n", i, A[i]);
        //         } 
        //         else 
        //         {
        //             B[i-aux-1] = buffer[i];
        //             // printf("B[%i]: %c\n", i-aux-1, B[i-aux-1]);
        //         }
        //     }
        // }


        // printf("A: %s (len: %i)\n", A, strlen(A));
        // printf("B: %s (len:%i)\n", B, strlen(B));

        fits (A, B);
        
    }

    // fits ("239081203812093", "3812093"); //encaixa
    // fits ("239081203812093", "3712093"); //nao
    // fits ("2132132", "1111111111111111"); //nao
    // fits ("12", "2");
    // fits ("0912830912830912830981209381209312937981273981273123978", "912830912830981209381209312937981273981273123978"); 
    // //encaixa
    // fits ("0912830912830912830981209381209312937981273981273123978", "912830830981209381209312937981273981273123978");
    // // nao
    // fits ("77777777777777777", "77"); //encaixa

    return 0;
}



        // fgets(buffer, 2100, stdin);

        // for (int j = 0; buffer[j] != ' '; j++)
        // {
        //     A[j] = buffer[j];
        //     aux++;
        //     printf("%i\n", j);
        // }
        
        // A[aux-2] = '\0';

        // printf("%s\n", A);