#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void zadanie(int* p, int* q)
{
	*p ^= *q;
	*q ^= *p;
	*p ^= *q;
}

int main()
{
	int p = 5, q = 5;
	zadanie(&p,&q);
	printf("%d, %d\n", p,q);
	return 0;
}
