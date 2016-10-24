#include <stdio.h>

int main() 
{
    int znak, i, counter = 0;
    int isdigit(int znak);
    printf("Podaj napis: ");
    while((counter < 100) && (znak = getchar()) != '\n')
    {
        if(isdigit(znak))
        {
            znak = znak - '0';
            for(i = 0; i < znak; i++)
            {
                putchar(' ');
            }
        }
        else
        {
            putchar(znak);
        }
        counter++;
    }
    putchar('\n');
    return 0;
}
