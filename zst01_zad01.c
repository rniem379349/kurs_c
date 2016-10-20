#include <stdio.h>

int main() {
    printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", '\n', '\t', '\r', '\b', '\a', '\f', '\\\\', '\\');
    printf("\n\n \t\n \r\n \b\n \a\n \f\n \\\\\n \\\n");
    return 0;
}
