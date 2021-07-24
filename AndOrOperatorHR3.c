#include <stdio.h>
int main()
{
    int i, j, n, k;
    int m1 = 0, m2 = 0, m3 = 0;
    int and, or, xor;
    printf("enter size of array\n");
    scanf("%d", &n);

    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("plz enter a num\n");
    scanf("%d", &k);

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {

            and = i & j;
            if (and<k &&and> m1)
            {
                m1 = and;
            }
            or = i | j;
            if (or <k && or> m2)
            {
                m2 = or ;
            }
            xor = i ^ j;
            if (xor<k && xor> m3)
            {
                m3 = xor;
            }
        }
    }

    printf("%d\n", m1);
    printf("%d\n", m2);
    printf("%d", m3);

    return 0;
}