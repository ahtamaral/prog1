#include <stdio.h>
#include <string.h>

void dancingSentence(char * sentence)
{
    int sentenceLen = strlen(sentence);
    char buffer[50];
    /*printf("%i\n", sentenceLen);*/
    int currentState = 1; /*0: Minuscula, 255: Maiuscula*/

    int i;
    for (i = 0; i < sentenceLen; i++)
    {
        if (sentence[i] == ' ')
        {
            buffer[i] = ' ';
        }
        else 
        {
            if (sentence[i] >= 'A' && sentence[i] <= 'Z')
            {
                if (currentState == 0)
                {
                    
                    buffer[i] = sentence[i] + 32;
                }
                else 
                {
                    buffer[i] = sentence[i];
                }
            }
            else if (sentence[i] >= 'a' && sentence[i] <= 'z')
            {
                if (currentState != 0)
                {
                    
                    buffer[i] = sentence[i] - 32;
                    /* printf("%c.\n\n", buffer[i]);*/
                }
                else 
                {
                    buffer[i] = sentence[i];
                }
            }
            currentState = !currentState;
        }
    }

    buffer[sentenceLen] = '\0';
    printf("%s\n", buffer);    

}

int main() {
 
    char *text = NULL;
    size_t len = 0;
    size_t lineSize = 0;

    while (lineSize = getline(&text, &len, stdin) != -1) {

        text[strlen(text)-1] = '\0';
        /*printf("%s: %i\n", text, strlen(text));*/
        dancingSentence(text);
    }

    
 
    return 0;
}