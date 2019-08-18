#include <stdio.h>

void main() {

    int n, temp, arm = 0, num = 0, cube = 0;

    printf("\nEnter a Number: ");
    scanf(" %d", &n);

    temp = n;
    while (temp != 0) {
        num = temp % 10;
        cube = num * num * num;
        arm = arm + cube;
        temp = temp / 10;
    }
    if (n == arm)
        printf("\n%d is an armstrong number.", n);
    else
        printf("\n%d is not an armstrong number.", n);


}