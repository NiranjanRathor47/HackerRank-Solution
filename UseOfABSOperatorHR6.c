#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int m, n, i, j, sum = 0, s1 = 0, s2 = 0;
    printf("plzz enter a num\n");
    scanf("%d", &m);
    int arr[m][m];
    printf("plz enter value of matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < m; i++)
    {

        s1 = s1 + arr[i][i];
    }

    for (i = 0; i < m; i++)
    {
        s2 = s2 + arr[i][m - i - 1];
    }

    sum = s1 - s2;

    //  printf("%d\n", s1);
    //  printf("%d", s2);
    printf("%d", abs(sum)); // for make the value positive

    return 0;
}
