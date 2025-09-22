#include <stdio.h>

int main() {

    int x;
//x1
    x = printf("X") || printf("U") && printf("8") || printf("6");
    printf("%d", x);

    return 0;
}