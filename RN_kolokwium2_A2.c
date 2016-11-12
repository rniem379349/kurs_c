#include <stdio.h>

int dzielprzezdwa(int x)
{
	int y = x; // kopia x dla do while
	int z;
	int i;

	if (x == 1)
	{
		printf("Za mala liczba.\n");
		return 0;
	}

	
	for (z = y; z % 2 == 0; z = z >> 1)
	{
		printf("Dzieli for przez 2: %d\n", z/2);
	}

	printf("===== Petla while:\n");
	while (x % 2 == 0)
	{
		x = x >> 1;
		printf("Dzieli przez 2: %d\n", x);
	}
	printf("===== Koniec while\n");

	printf("===== Petla do while:\n");
	do
	{
		y = y >> 1;
		printf("Dzieli przez 2: %d\n", y);
	} while (y % 2 == 0);
	printf("===== Koniec do while\n");


	printf("================================\n");
	printf("Wynik z while: %d\n", x);
	printf("Wynik z do while: %d\n", y);
	printf("Wynik z for: %d\n", z);
}

int main()
{
	int a;
	printf("Podaj liczbe: ");
	scanf("%d", &a);
	dzielprzezdwa(a);
	return 0;
}
