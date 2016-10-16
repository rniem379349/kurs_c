#include <stdio.h>

int main() {
int x;
int y;
char znak;
int wynik;

printf("Podaj x:");
scanf("%d",&x);
printf("Podaj y:");
scanf("%d",&y);
printf("Podaj znak:");
scanf(" %c",&znak);

if (znak == '+') {
wynik = x + y;
printf("%d \n", wynik);
}

if (znak == '-') {
wynik = x - y;
printf("%d \n", wynik);
}

if (znak == '*') {
wynik = x * y;
printf("%d \n", wynik);
}

if (znak == '/') {
wynik = x / y;
printf("%d \n", wynik);
}

return 0;
}
