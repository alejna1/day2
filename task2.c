#include <stdio.h>

int main(void)
{
    int a, b, c, d;

    printf("Enter four numbers: ");
    if (scanf("%d %d %d %d", &a, &b, &c, &d) != 4) {
        printf("Invalid input.\n");
        return 1;
    }

    /* find the largest value */
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;

    /* count how many times the largest value occurs */
    int count = 0;
    if (a == max) ++count;
    if (b == max) ++count;
    if (c == max) ++count;
    if (d == max) ++count;

    if (count > 1)
        printf("The largest number is: %d (occurs more than once)\n", max);
    else
        printf("The largest number is: %d\n", max);

    return 0;
}
#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (n >= -50 && n <= 50) {
        printf("Number is within -50 and 50. ");
        if (n % 2 == 0)
            printf("Even.\n");
        else
            printf("Odd.\n");
    } else {
        printf("Number is not within -50 and 50.\n");
    }

    return 0;
}
