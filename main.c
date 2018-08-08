#include <stdio.h>
#define MAX_CHARS 30
#define FIRST_NUMBER 2
#define ELEMENTS_PER_GROUP 3

int main(void)
{
    char input[MAX_CHARS];
    char x;
    while (scanf("%s", &input) != EOF)
    {
        for (x = 0; x < MAX_CHARS; x++)
        {
            if (input[x] >= 'A' && input[x] <= 'Z')
            {
                input[x] = input[x] - (input[x] / 'Q') - (input[x] / 'X');
                printf("%d", ((input[x] - 'A') / ELEMENTS_PER_GROUP) + FIRST_NUMBER);
            }
            else if (input[x] == '1' || input[x] == '0' || input[x] == '-')
                printf("%c", input[x]);
            else
                break;
        }
        printf("\n");
    }
    return 0;
}