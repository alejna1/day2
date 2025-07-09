#include <stdio.h>
#include <stdlib.h>   /* for abs() */

int main(void)
{
    int n;

    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n > 0) {
        /* positive branch */
        if (n % 2 == 0)
            printf("%d is positive and even.\n", n);
        else
            printf("%d is positive and odd.\n", n);

    } else if (n < 0) {
        /* negative branch */
        if (abs(n) > 100)
            printf("%d is negative and its absolute value is greater than 100.\n", n);
        else
            printf("%d is negative and its absolute value is 100 or less.\n", n);

    } else {
        /* zero */
        printf("The number is zero.\n");
    }

    return 0;
}
#include <stdio.h>

int main(void)
{
    int x, y;

    printf("Enter two integers: ");
    if (scanf("%d %d", &x, &y) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    if (x == y) {
        printf("Both numbers are equal.\n");
    } else {
        int larger  = (x > y) ? x : y;
        int smaller = (x > y) ? y : x;

        printf("%d is larger. ", larger);

        if (larger % smaller == 0)
            printf("%d is divisible by %d.\n", larger, smaller);
        else
            printf("%d is not divisible by %d.\n", larger, smaller);
    }

    return 0;
}
