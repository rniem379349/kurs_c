#include <stdio.h>

int NWD(int a, int b)
{
    while (a != b)
    {
        if (a < b)
        {
        b -= a;
        }
        else
        {
        a -= b;
        }
    }
    printf("NWD: %d \n", a);
    return a;
}

int NWW(int a, int b)
{
    int wynik = ((a * b)/(NWD(a,b)));
    printf("NWW: %d \n", wynik);
    return wynik;
}

int main() 
{
    NWW(20,30);
    return 0;
}
