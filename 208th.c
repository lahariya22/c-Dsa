#include <stdio.h>

int main() {

    char x, y;

    printf("Enter first character: ");
    scanf("%c", &x);

    printf("Enter another character: ");
    scanf("%c", &y);

     printf("\n\n%c and %c", x, y);
    printf("\n\n%c and %d", x, y);

    return 0;
}