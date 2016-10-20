#include <stdio.h>
#define len(x) (sizeof(x)/sizeof(*(x)))

int main() {
    int var;
    int mn, mx = 0;
    int warunek = 1;
    printf("Podaj liczbe: ");
    scanf("%d ", &var);
    printf("\nPodana liczba: %d \n", var);
    mn = var;
    mx = var;
    while (warunek == 1)
    {
        printf("Podaj liczbe:");
        scanf("%d ", &var);
        printf("\nPodana liczba: %d \n", var);
        if (var > 0)
        {
            if (var > mx)
            {
                mx = var;
            }
            if (var < mn)
            {
                mn = var;
            }
        }

        else
        {
            warunek = 0;
        }
    }

    printf("Najwiekszy element: %d \n", mx);
    printf("Najmniejszy element: %d \n", mn);
    return 0;
}
