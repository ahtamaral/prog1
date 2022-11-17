#include <stdio.h>
#include <string.h>
 
int main() {
 
    int numberOfEntries;
    int numberOfPeople;
    char buffer[21];
    char lastBuffer[21];
    int ret;
    int willBeEnglish;

    lastBuffer[0] = 0;
    willBeEnglish = 0;

    scanf("%i", &numberOfEntries);

    for (int i = 0; i < numberOfEntries; i++)
    {
        scanf("%i", &numberOfPeople);
        
        for (int i = 0; i < numberOfPeople; i++)
        {
            
            scanf("%s", buffer);

            // printf("%i\n", lastBuffer[0]);
            if (lastBuffer[0] != 0)
            {
                ret = strcmp(buffer, lastBuffer);

                if (ret == 0)
                {
                    // printf("EQUAL.\n");
                }
                else 
                {
                    // printf("DIFFERENT.\n");
                    willBeEnglish = 1;
                }
            } 

            strcpy(lastBuffer, buffer);

        }

        if (willBeEnglish)
        {
            printf("ingles\n");
        } 
        else 
        {
            printf("%s\n", buffer);
        }

        lastBuffer[0] = 0;
        willBeEnglish = 0;

    }

 
    return 0;
}