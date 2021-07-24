#include<stdio.h>
#include<math.h>

int main ()
{
    float m,ti,te;
    int a,b, total;
    
    scanf("%f",&m);
    scanf("%d%d",&a,&b);
    
    ti = (a*m)/100;
    te = (b*m)/100;
    
    total = (int) round( m + ti + te ) ;   // important == for round of the float value 
    printf("%d",total);                    // like 3.505 =4 and 3.402 = 3
    
    return 0;
}