#include <stdio.h>


int histo()
{
	char seek;
	int licznik, j;
	int alfabet[32];
	for(licznik = 0; licznik < 32; licznik++)
	{
		alfabet[licznik] = 0;
	}

	printf("Ciag znakow: ");
	while ((seek = getchar()) != '\n')
	{
		if ((seek >= 'A') && (seek <= 'Z'))
		{
			seek = seek + 32;
		}
		alfabet[seek - 97] += 1;
	}
	for(licznik = 0; licznik < 26; licznik++)
	{
		printf("%c: %d:", licznik + 97, alfabet[licznik]);
		for(j = 0; j < alfabet[licznik]; j++)
		{
			putchar(' ');
		}
		putchar('*');
		putchar('\n');
	}
}

int main()
{
	histo();
	return 0;
}
