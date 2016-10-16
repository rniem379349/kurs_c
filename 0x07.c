#include <stdio.h>

int main() {
    char searching, seek;
    int and, destroy = 0;
    printf("Szukany znak: ");
    scanf("%c", &searching);
    char null = getchar();
    do {
        seek = getchar();
        if (seek == searching) {
                printf("po raz %i\n", and);
            and = and + 1;
            destroy = destroy + 1;
        } else {
            destroy = destroy + 1;
        }
    } while (seek != '\n');
    printf("%i\n",and);
    printf("%i\n",destroy);
    //printf("%d\n",and/destroy);
    printf("KONIEC");
    return 0;
}
