#include <stdio.h>

int main()
{

    int sum = 0, r, n;
    printf("enter a number\n");
    scanf("%d", &n);
    while (n != 0) // this is important
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    printf("%d", sum);

    return 0;
}