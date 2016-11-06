#include <stdio.h>

float kwa(int a, int b, int c, float x) {
	float wynik = a*x*x + b*x + c;
	return wynik;
}

int main() {
	int i, j, a, b, c;
	printf("Podaj a:");
	scanf("%d", &a);
	printf("Podaj b:");
	scanf("%d", &b);
	printf("Podaj c:");
	scanf("%d", &c);
	for(i = -10; i < 10; i = i + 1)
	{
		for(j = 0; j < kwa(a,b,c,i); j++)
        {
            putchar(' ');
        }
        putchar('*');
        putchar('\n');
	}
	return 0;
}
