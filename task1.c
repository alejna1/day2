#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    /* find the smallest value */
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;

    /* count how many times the smallest value occurs */
    int count = 0;
    if (a == min) ++count;
    if (b == min) ++count;
    if (c == min) ++count;

    if (count > 1)
        printf("The smallest number is: %d (occurs more than once)\n", min);
    else
        printf("The smallest number is: %d\n", min);

    return 0;
}
#include <stdio.h>

int main(void)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0) {
        printf("The number is divisible by both 3 and 5.\n");
    } else if (n % 3 == 0) {
        printf("The number is divisible by 3 only.\n");
    } else if (n % 5 == 0) {
        printf("The number is divisible by 5 only.\n");
    } else {
        printf("The number is not divisible by 3 or 5.\n");
    }

    return 0;
}
