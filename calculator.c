// calculator using goto !!!!!!!!

#include<stdio.h>
int main () {
    char c;
    float a, b, d;

    printf("Enter the first number: ");
    scanf("%f", &a);

main:
    printf("\nEnter another number: ");
    scanf("%f", &b);

    printf("\nWhich operator do you want to perform (+, -, *, /): ");
    getchar(); // Consume any leftover newline character
    scanf("%c", &c);

    if (c == '+') {
        goto add;
    } else if (c == '-') {
        goto sub;
    } else if (c == '*') {
        goto multiply;
    } else if (c == '/') {
        goto division;
    } else {
        printf("Invalid operator! Please try again.\n");
        goto main;
    }

add:
    a = a + b;
    printf("\nThe result is: %f", a);
    printf("\nDo you want to perform any other operation? (1/0): ");
    scanf("%d", &d);

    if (d == 1) {
        goto main;
    } else {
        return 0;
    }

sub:
    a = a - b;
    printf("\nThe result is: %f", a);
    printf("\nDo you want to perform any other operation? (1/0): ");
    scanf("%d", &d);

    if (d == 1) {
        goto main;
    } else {
       return 0;
    }

multiply:
    a = a * b;
    printf("\nThe result is: %f", a);
    printf("\nDo you want to perform any other operation? (1/0): ");
    scanf("%d", &d);

    if (d == 1) {
        goto main;
    } else {
        return 0;
    }

division:
    if (b == 0) {
        printf("\nError: Division by zero is not allowed!");
    } else {
        a = a / b;
        printf("\nThe result is: %f", a);
    }
    
    printf("\nDo you want to perform any other operation? (1/0): ");
    scanf("%d", &d);

    if (d == 1) {
        goto main;
    } else {
        return 0;
    }
}
