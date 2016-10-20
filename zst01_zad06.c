#include <stdio.h>

int main() {
    char napis[] = "";
    int i;
    int c;
    printf("Podaj napis: ");
    while((c=getchar())!=EOF)
    {
        if(c == '\t')
        {
            for (i = 0; i < 7; i++)
            {
                putchar('_');
            }
        }
        else
        {
            printf("%c", c);
        }
    }

    //scanf("%s", &napis);
    //printf("%s", napis);
    return 0;
}
