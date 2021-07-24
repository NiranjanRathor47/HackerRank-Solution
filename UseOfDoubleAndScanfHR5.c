#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "niranjan ";
    int j, sum = 0;
    scanf("%d", &j);
    double m, sum1;
    scanf("%lf", &m);
    char t[1000] ;
    scanf("%*[\n]%[^\n]",t);         //  this is important for read scanf (next word => %*[\n]%[^\n]

    sum = i + j;
    printf("%d\n", sum);
    sum1 = d + m;
    printf("%.1lf\n", sum1);
    
    
    
    printf("%s%s\n",s,t);    
    
    return 0;
}