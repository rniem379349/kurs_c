#include <stdio.h>

int main() {
	float a, b, c;
	scanf("%f",&a);
	getchar();
	scanf("%f",&b);
	getchar();
	scanf("%f",&c);
	getchar();
	int index;
	int x;
	for(x = -10; x < 10; x++) 
	{
		double y = x*x*a + x*b + c;
		for(index=0; index < y; index++);
		{
			printf(" ");
		}
		printf("*\n");
	}
	return 0;
}
