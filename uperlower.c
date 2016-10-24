#include <stdio.h>

int main() 
{
    int a;
    putchar(lower('A'));
    return 0;
}

int lower(a)
{
    if ((a >= 'A') && (a <= 'Z'))
    {
        a = a + 32;
        return a;
    }
}
