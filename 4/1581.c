#include <stdio.h>
#include <string.h>
 
int main() {
 
    int numberOfPlayers;
    int numberOfMatches;
    char buffer[25];
    char *goals[50];
    int goalsInt;
    int goodPlayer = 1;
    int goodPlayers = 0;
    int i;

    fgets(buffer, 25, stdin);
    buffer[strlen(buffer)-1] = '\0';
    /*printf("%s\n", buffer);*/

    char *ptr = strtok(buffer, " ");

    i = 0;
    while (ptr != NULL)
    {
        if (i == 0){numberOfPlayers = atoi(ptr);}
        if (i == 1){numberOfMatches = atoi(ptr);}
        ptr = strtok(NULL, " ");
        i++;
    }

    /*printf("%i\n", numberOfMatches+numberOfPlayers);*/

    int j, k;
    for (j = 0; j < numberOfPlayers; j++)
    {
        goodPlayer = 1;
        fgets(buffer, 25, stdin);
        buffer[strlen(buffer)-1] = '\0';

        char *ptr = strtok(buffer, " ");

        int l = 0;
        while (ptr != NULL)
        {
            goals[l] = ptr;
            ptr = strtok(NULL, " ");
            l++;
        }

        int p;
        for (p = 0; p < l; p++)
        {
            if (atoi(goals[p]) == 0)
                goodPlayer = 0;
            /*printf("%i\n", atoi(goals[p]));*/
        }
        /*printf("\n");*/

        if (goodPlayer)
        {
            /*printf("GOOD PLAYER\n");*/
        }

        goodPlayers += goodPlayer;

        /*printf("%s\n", buffer);*/
    }

    printf("%i\n", goodPlayers);
    return 0;
}