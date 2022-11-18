#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    int numberOfEntries;
    int textLen;
    char buffer[100];
    char currentPlanet [55];
    char year[5];
    char yearsAgo[5];
    int yearInt, yearsAgoInt;
    int oldestMessage = 50000;
    char bestPlanet [55];
    char delim[] = " ";

    numberOfEntries = 1;

    while(numberOfEntries != 0)
    {
        scanf("%i\n", &numberOfEntries);
        /*printf("NE: %i\n", numberOfEntries);*/

        int i;
        for (i = 0; i < numberOfEntries; i++)
        {

            fgets(buffer, 100, stdin);
            textLen = strlen(buffer);
            buffer[textLen-1] = '\0';

            char *ptr = strtok(buffer, delim);

            int j = 0;
            while (ptr != NULL)
            {
                if (j == 0) {strcpy(currentPlanet, ptr);}
                if (j == 1) {strcpy(year, ptr);}
                if (j == 2) {strcpy(yearsAgo, ptr);}
                ptr = strtok(NULL, delim);
                j++;
            }

            yearInt = atoi(year);
            yearsAgoInt = atoi(yearsAgo);


            if (yearInt - yearsAgoInt < oldestMessage)
            {
                oldestMessage = yearInt - yearsAgoInt;
                strcpy(bestPlanet, currentPlanet);
            }
        }
        if (numberOfEntries != 0)
            printf("%s\n", bestPlanet);
        oldestMessage = 50000;
    }


    return 0;
}