#include <stdio.h>
#define MAX_CHARS 30
#define FIRST_NUMBER 2

int main(void)
{
    char input[MAX_CHARS];
    char x;
    char aux;
    // Data input
    while (scanf("%s", &input) != EOF)
    {
        for (x = 0; x < MAX_CHARS; x++)
        {
            if (input[x] >= 'A' && input[x] <= 'O')
            {
                aux = input[x] - 'A';
                aux = aux / 3;
                printf("%d", aux + FIRST_NUMBER);
            }
            else if (input[x] >= 'P' && input[x] <= 'S')
            {
                printf("7");
            }
            else if (input[x] >= 'T' && input[x] <= 'V')
            {
                printf("8");
            }
            else if (input[x] >= 'W' && input[x] <= 'Z')
            {
                printf("9");
            }
            else if (input[x] == '1' || input[x] == '0')
            {
                printf("%c", input[x]);
            }
            else if (input[x] == '-')
            {
                printf("-");
            }
            else
                break;
        }
        printf("\n");
    }
    return 0;
}