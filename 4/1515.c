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

    scanf("%i\n", &numberOfEntries);

    for (int i = 0; i < numberOfEntries; i++)
    {
        fgets(buffer, 2100, stdin);
        textLen = strlen(buffer);
        buffer[textLen-1] = '\0';
        // printf("read: %s\n", buffer);

        // Parsing string.
        char *ptr = strtok(buffer, delim);

        int j = 0;
        while (ptr != NULL)
        {
            // printf("'%s'\n", ptr);
            if (j == 0) {strcpy(currentPlanet, ptr);}
            if (j == 1) {strcpy(year, ptr);}
            if (j == 2) {strcpy(yearsAgo, ptr);}
            ptr = strtok(NULL, delim);
            j++;
        }

        yearInt = atoi(year);
        yearsAgoInt = atoi(yearsAgo);

        // printf("%s %i %i\n", currentPlanet, yearInt, yearsAgoInt);

        if (yearInt - yearsAgoInt < oldestMessage)
        {
            oldestMessage = yearInt - yearsAgoInt;
            strcpy(bestPlanet, currentPlanet);
        }
    }

    printf("%s\n", bestPlanet);


    return 0;
}