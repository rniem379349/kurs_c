#include <stdio.h>


int anagram()
{
	char seek;
	int licznik, i;
	int slowo1[32];
	int slowo2[32];
	for(licznik = 0; licznik < 32; licznik++)
	{
		slowo1[licznik] = 0;
		slowo2[licznik] = 0;
	}

	printf("Oba slowa (oddzielic spacja): ");

	while ((seek = getchar()) != ' ')
	{
		if ((seek >= 'A') && (seek <= 'Z'))
		{
			seek = seek + 32;
		}
		slowo1[seek - 97] += 1;
	}

	while ((seek = getchar()) != '\n')
	{
		if ((seek >= 'A') && (seek <= 'Z'))
		{
			seek = seek + 32;
		}
		slowo2[seek - 97] += 1;
	}

	for(licznik = 0; licznik < 26; licznik++)
	{
		/*printf("%c: %d %c: %d\n", licznik + 97,slowo1[licznik], licznik + 97, slowo2[licznik]);*/
		if (slowo1[licznik] != slowo2[licznik])
		{
			printf("To nie anagram...\n");
			break;
		}
	}
	printf("To je anagram!!\n");
}

int main()
{
	anagram();
	return 0;
}
