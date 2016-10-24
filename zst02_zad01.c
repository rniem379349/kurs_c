#include <stdio.h>

float kwa(int a, int b, int c, int x) {
	float wynik = a*x*x + b*x + c;
	return wynik;
}

int main() {
	int i, a, b, c, x, ilosc;
	printf("Podaj a:");
	scanf("%d", &a);
	printf("Podaj b:");
	scanf("%d", &b);
	printf("Podaj c:");
	scanf("%d", &c);
	printf("Podaj ilosc iksow:");
	scanf("%d", &ilosc);
	for(i = 0; i < ilosc; i++) 
	{
		//printf()
		printf("%.2f \n",kwa(1, 1, 1, 2));
	}
	return 0;
}
