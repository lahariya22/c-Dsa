#include <stdio.h>

int main() {
// for this use fflush(stdin);

    char name[15];
    char college[40];
    int age;
    float marks;

    printf("Enter your name: ");
    scanf("%[A-Za-z ]", &name);

    fflush(stdin);

    printf("Enter your college: ");
    scanf("%[A-Za-z ]", &college);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your marks: ");
    scanf("%f", &marks);

    printf("\n\n~~\n");

    printf("\nMy Name: %s, My College: %s, My Age: %d and My Marks: %.2f", name, college, age, marks);


    return 0;
}