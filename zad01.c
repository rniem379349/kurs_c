#include <stdio.h>

int main() {
	char c;
	int all = 0, nr = 0;
	
	while ((c=getchar()) != EOF) {
		if (c == '\n') 
		{
			if (all > 80) 
			{
				printf("%d", nr);
				all = 0;
				nr++;
			}
			else 
			{
				all++;
			}
		}
	}
	printf("KONIEC\n");
	return 0;

}
