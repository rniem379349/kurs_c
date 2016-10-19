#include <stdio.h>

int main() {
	char desired_char, seek;
	float and = 1;
	float destroy = 0;
	printf("Szukany znak: ");
	scanf("%c", &desired_char);
	char null = getchar();
	do {
		seek = getchar();
		if (seek == desired_char) {
			//printf("po raz %f\n", and);
			and = and + 1;
			destroy = destroy + 1;
		} else {
			destroy = destroy + 1;
		}
	} while (seek != '\n');
	float procent = (and-1)/(destroy-1) * 100.0;
	//printf("and %f\n destroy %f\n", and-1, destroy-1);
	//printf("%f\n",and-1);
	printf("%.2f procent\n", procent);
	printf("KONIEC\n");
	return 0;
}
