#include <stdio.h>
#include <stdlib.h>

int main() {

    char x, y;

    printf("Enter first character: ");
    scanf("%c", &x);

    fflush(stdin);

    printf("Enter another character: ");
    scanf("%c", &y);

    printf("\n\n%c and %c", x, y);

    return 0;
}