#include <stdio.h>

void odwrocTab(char *tab, int rozm, int krok)
{
	char *q;
	char *p, *temp;
	int i;
	p = tab;
	q = tab + (rozm-1)*krok;
	while (p < q)
	{
		/*temp = *q;
		q = *p;
		p = *temp;
		printf("%d %d tempura %d\n",*p, *q, *temp);
		p += krok;
		q -= krok;
		printf("%d %d\n",*p, *q);
	}*/
		for(i=0;i < krok;i++)
		{
			temp = *(p+i);
			*(p+i) = *(q+i);
			*(q+i) = temp;
			printf("%d %d tempura %d\n",*p, *q, *temp);
		}
		p += krok;
		q -= krok;
	}
}
int main()
{
	char tabs[] = {1,2,3};
	odwrocTab(tabs, 3, 1);
	return 0;
}
