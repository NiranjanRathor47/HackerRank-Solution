#include<stdio.h>

int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    float s=0,s1=0,s2=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
     if(arr[i]>0)
    {
        s++ ;
    }
    
    else if (arr[i]<0)
    {
        s1++ ;
    }
    else 
    {
        s2++ ;
    }
    
    }
    
    
    
    printf("%.6f\n",s/n);
    printf("%.6f\n",s1/n);
    printf("%.6f\n",s2/n);
    
    return 0;
}