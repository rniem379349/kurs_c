#include <stdio.h>
#define len(x) (sizeof(x)/sizeof(*(x)))

int main() {
    int lista[100];
    int var, mn, mx;
    int pointr = 0;
    bool warunek = true;

    while (warunek == true) {
        printf("Podaj liczbe:");
        scanf("%d", &var);

        if (var > 0) {
            lista[pointr] = var;
            pointr += 1;
        }

        else {
            warunek = false;
        }
    }

    for (i = 0; i < )

    return 0;
}
