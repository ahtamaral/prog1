#include <stdio.h>
#include <string.h>

double min(double a, double b)
{
    if (a > b) { return b;}
    else {return a;}
}

int main() {
 
    double tOtavio, tBruno, tIan;
    char buffer[15];
    char delim[] = " ";
    char *token;
    int textLen;
    float minimun;

    fgets(buffer, 15, stdin);
    textLen = strlen(buffer);
    buffer[textLen-1] = '\0';

    printf("read: %s\n", buffer);

    token = strtok(buffer, " ");

    int j = 0;
    while (token != NULL)
    {
        printf("%s\n", token);
        if (j == 0) {tOtavio = atof(token);}
        if (j == 1) {tBruno = atof(token);}
        if (j == 2) {tIan = atof(token);}
        token = strtok(NULL, " ");
        j++;
    }

    printf("%f\n", tOtavio);
    printf("%f\n", tBruno);
    printf("%f\n", tIan);

    minimun = min(tOtavio, tBruno);
    minimun = min(minimun, tIan);

    printf("%f\n", minimun);






    return 0;
}