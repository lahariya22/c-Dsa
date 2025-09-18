#include <stdio.h>

int main() {

  char name[30];

     char x = 'A';
    int y = 5;
     float z = 8.9f;
    char a[12];

    printf("Enter a character: ");
     scanf("%c", &x);
    printf("Enter a number: ");
     scanf("%d", &y);
    printf("Enter a float number: ");
     scanf("%f", &z);

    printf("Enter some string: ");
    scanf("%s", &a);

    printf("Enter your name: ");
    scanf("%s", &name);

    printf("The Character: %c and The Name: %s", x, name);
     printf("The Number: %d and The Name: %s", y, name);
     printf("The Float Number: %f and The Name: %s", z, name);
    printf("The random string: %s and The Name: %s", a, name);


    return 0;
}