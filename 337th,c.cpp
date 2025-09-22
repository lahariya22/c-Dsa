include <stdio.h>

int main() {

    int x;
    x = printf("ram") > printf("om") 
                && printf("vijyant") > printf("golu") 
                        || printf("mohan") < printf("vikrant");

    printf("%d", x);

    return 0;
}