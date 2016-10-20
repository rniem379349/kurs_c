#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int warunek = 0;
    int scope = 101;
    char czy_tak, roznica;
    int zgaduj = rand() % scope;

    while(warunek == 0)
    {
        printf("Zgaduje: %d\n", zgaduj);
        printf("Czy to Twoja liczba? t - tak, n - nie ");
        scanf("%c", &czy_tak);
        printf("odp. %c \n", czy_tak);
        if(czy_tak == 't')
        {
            warunek = 1;
        }
        else
        {
            printf("Za mala czy za duza? m - za mala, d - za duza ");
            scanf("%c", &roznica);
            printf("odp. %c \n", roznica);
            if(roznica == 'm')
            {

            }
        }
    }
    return 0;
}
