#include <stdio.h>
#define MAX_CHARS 30
#define FIRST_NUMBER 2

int main(void)
{
    char input[MAX_CHARS];
    char x;
    while (scanf("%s", &input) != EOF)
    {
        for (x = 0; x < MAX_CHARS; x++)
        {
            if (input[x] > 'P')
                input[x] = input[x] - 1 - (input[x] / 'X');
            if (input[x] >= 'A' && input[x] <= 'Z')
                printf("%d", ((input[x] - 'A') / 3) + FIRST_NUMBER);
            else if (input[x] == '1' || input[x] == '0' || input[x] == '-')
                printf("%c", input[x]);
            else
                break;
        }
        printf("\n");
    }
    return 0;
}