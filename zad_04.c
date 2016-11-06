#include <stdio.h>

int f(int x) {

return  16 + x*(-9 + x*(1+x*x*x*x*x*3));

}

int main() {

int i;

for (i=0;i<11;i++) {
printf("%d \n", f(i));
}

return 0;
}
