#include <stdio.h>
#include <string.h>
 

void encode(char * text)
{
    int length = strlen(text);
    int middle = length / 2;
    long unsigned bufferLen;
    char buffer[length];
    
    #ifdef DEBUG
    printf("read: %s length: %i  middle: %i\n", text, length, middle);
    #endif

    for (int i = 0; i < length; i++)
    {
        if ( (text[i] > 64 && text[i] < 91) ||
              (text[i] > 96 && text[i] < 123)  )
        {
            text[i] = text[i] + 3;
        }    
    }

    #ifdef DEBUG
    printf("1a: %s len: %i\n", text, length);
    #endif

    buffer[length] = '\0';
    for (int i = length - 1; i >= 0; i--)
    {
        buffer[length - 1 - i] = text[i];
    }

    bufferLen = strlen(buffer);

    #ifdef DEBUG
    printf("2a: %s len: %lu\n", buffer, bufferLen);
    #endif


    for (int i = middle; i < bufferLen; i++)
    {
        buffer[i] = buffer[i] - 1;
    }

    #ifdef DEBUG
    printf("3a: %s len: %lu\n", buffer, bufferLen);
    #else
    printf("%s\n", buffer);
    #endif
}

int main() {

    int numberOfEntries;
    char textToEncode[1000];
    int textLength;

    scanf("%i\n", &numberOfEntries);

    for (int i = 0; i < numberOfEntries; i++)
    {
        // scanf("%s\n", textToEncode);
        fgets(textToEncode, 1000, stdin);
        // printf("%s\n", textToEncode);
        textLength = strlen(textToEncode);
        textToEncode[textLength-1] = '\0';
        encode(textToEncode);
    }
 
    return 0;
}