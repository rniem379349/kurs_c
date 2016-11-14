#include <stdio.h>

int main(){
	double macierz[4][3] = {
	{10,10,10}, {10,0,0}, {0,0.1,0.1}, {0,0,1.1}};
	printf("%f",macierz[3][2]);
	return 0;
}
