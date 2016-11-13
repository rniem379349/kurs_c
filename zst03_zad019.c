#include <stdio.h>
#define ROZMIAR 10
double sygnal[ROZMIAR] = {7,3,1,4,-1,2,3,5,2,8};
double wynik[ROZMIAR];
double wagi[3] = {0.25,0.5,0.25};
int j;

void splot(double tab[], double wagi[], double wynik[])
{
	int i = 1;
	double temp, first, last;
	first = (tab[0] * wagi[0] + tab[1] * wagi[1])/(wagi[0] + wagi[1]);
	last = (tab[ROZMIAR-2] * wagi[0] + tab[ROZMIAR-1] * wagi[1])/(wagi[0] + wagi[1]);

	for (i; i < ROZMIAR; i++)
	{
		printf("%f, %f, %f ", tab[i-1], tab[i], tab[i+1]);
		temp = (tab[i-1] * wagi[0] + tab[i] * wagi[1] + tab[i+1] * wagi[2])/(wagi[0] + wagi[1] + wagi[2]);
		wynik[i] = temp;
		printf("Wynik: %f\n", temp);
	}
	wynik[0] = first;
	wynik[ROZMIAR-1] = last;
	for(j = 0; j < ROZMIAR; j++)
	{
		printf("%f \n", wynik[j]);
	}
}


	int main()
	{
		splot(sygnal,wagi,wynik);
		return 0;
	}
