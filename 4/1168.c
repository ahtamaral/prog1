#include <stdio.h>
#include <string.h>
 
int main() {
 
    int numberOfEntries;
    char number[70000];
    int amountOfLeds = 0;

    scanf("%i", &numberOfEntries);

    for (int i = 0; i < numberOfEntries; i++)
    {
        scanf("%s", number);
        // printf("%lu\n", strlen(number) );

        for (int i = 0; i < strlen(number); i++)
        {
            switch (number[i])
            {
                case '0':
                    amountOfLeds += 6;
                    break;
                case '1':
                    amountOfLeds += 2;
                    break;
                case '2':
                    amountOfLeds += 5;
                    break;
                case '3':
                    amountOfLeds += 5;
                    break;
                case '4':
                    amountOfLeds += 4;
                    break;
                case '5':
                    amountOfLeds += 5;
                    break;
                case '6':
                    amountOfLeds += 6;
                    break;
                case '7':
                    amountOfLeds += 3;
                    break;
                case '8':
                    amountOfLeds += 7;
                    break;
                case '9':
                    amountOfLeds += 6;
                    break;
            }
        }

        printf("%i leds\n", amountOfLeds);
        amountOfLeds = 0;

    }
 
    return 0;
}