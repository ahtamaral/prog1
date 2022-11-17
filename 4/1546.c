#include <stdio.h>
 
int main()
{

    int numberOfEntries;
    int numberOfFeedbacks;
    int feedback;

    scanf("%i", &numberOfEntries);
    // printf("numberOfEntries: %i\n", numberOfEntries);

    for (int i = 0; i < numberOfEntries; i++)
    {
        scanf("%i", &numberOfFeedbacks);
        // printf("numberOfFeedbacks: %i\n", numberOfFeedbacks);

        for (int i = 0; i < numberOfFeedbacks; i++)
        {
            scanf("%i", &feedback);

            switch(feedback)
            {
                case 1:
                    printf("Rolien\n");
                    break;
                case 2:
                    printf("Naej\n");
                    break;
                case 3:
                    printf("Elehcim\n");
                    break;
                case 4:
                    printf("Odranoel\n");
                    break;
            }
        }   

    }


    return 0;
}