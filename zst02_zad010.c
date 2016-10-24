#include <stdio.h>

int jeden(int x, int y)
{
    while(x < 10)
    {
        x += x * (x+y);
        y = 2 - x;
        printf("x: %d \ny: %d \n", x,y);
    }
    return 0;
}

int jeden_for(int x, int y)
{
    for(x; x<10; x)
    {
        x += x * (x+y);
        y = 2-x;
        printf("x: %d \ny: %d \n", x,y);
    }
    return 0;
}

int dwa(int x, int y)
{

}

int main() 
{
    printf("\n1. normalnie\n");
    jeden(1,1);
    printf("\n1. z forem\n");
    jeden_for(1,1);
    return 0;
}
