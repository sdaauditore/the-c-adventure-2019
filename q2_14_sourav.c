//Program to input a positive number and reverse the digits of the number.
#include<stdio.h>

void main() {
    int n, rem, rev = 0, temp;

    printf("\nEnter a number: ");
    scanf(" %d", &n);

    temp = n;

    while (n > 0) {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    printf("\n%d is the reverse of %d", rev, temp);
}