#include <stdio.h>

int main(void)
{
char a, x;
int l;
l = 0;

while( (x = getchar()) != '\n' ) {

 if( l == 0 )
 {
 l = 1;
 a = x;
 }
 else {
 l = 0;
 putchar(x);
 putchar(a);
 }
 }
 return 0;
 }
