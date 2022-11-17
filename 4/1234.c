#include <stdio.h>
#include <string.h>
 

void dancingSentence(char * sentence)
{
    int sentenceLen = strlen(sentence);
    char buffer[50];
    // printf("%i\n", sentenceLen);
    int currentState = 1; /*0: Minuscula, 255: Maiuscula*/

    for (int i = 0; i < sentenceLen; i++)
    {
        
        if (sentence[i] == 32)
        {
            // printf("space. --> space\n");
            buffer[i] = ' ';
        } 
        else 
        {
            if (sentence[i] > 64 && sentence[i] < 91) // É MAIUSCULA
            {
                // printf("uppercase. --> ");

                if (currentState == 0)
                {
                    //vira minuscula
                    buffer[i] = sentence[i] + 32;
                    // printf("%c.\n\n ", buffer[i]);
                }
                else 
                {
                    buffer[i] = sentence[i];
                }
            }
            else if (sentence[i] > 96 && sentence[i] < 123) // É minuscula
            {
                // printf("lowercase. -->");

                if (currentState != 0)
                {
                    //vira minuscula
                    buffer[i] = sentence[i] - 32;
                    // printf("%c.\n\n", buffer[i]);
                }
                else 
                {
                    buffer[i] = sentence[i];
                }
            }

            // printf("%i\n", currentState);
            currentState = !currentState;
            // printf("%i\n\n", currentState);
        }
        

        // printf("%c -> %c [%i]\n", sentence[i], buffer[i], !currentState);
    }

    buffer[sentenceLen] = '\0';
    printf("%s\n", buffer);
}

int main() {
 
    char text[50];
    int textLen;

    fgets(text, 50, stdin);
    // printf("read: %s", text);
    textLen = strlen(text);
    // printf("%i\n", textLen);
    text[textLen - 1] = '\0';

    dancingSentence(text);
 
    return 0;
}