#include<stdio.h>
int main ()
{
    int i,j,n,sum =0,sum1=0;
    int a[3],b[3];
    printf("enter the array 1 value\n");
    for(i=0; i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter array 2 value \n");
    for(j=0; j<3;j++)
    {
        scanf("%d",&b[j]);
    }

    for(i=0; i<3;i++)
    {
        //for(j=0; j<3;j++)
        {
            if(a[i]>b[i])
            {
                sum =sum +1 ;
            }
            
        }
    }  
     for(j=0; j<3;j++)
    {
       // for(i=0; i<3;i++)
        {
            if(b[j]>a[j])
            {
                sum1 =sum1 +1 ;
            }
          
        }
    }

    printf("sum = %d\n",sum);
    printf("sum1 = %d\n",sum1);

   return 0;
}