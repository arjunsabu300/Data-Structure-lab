#include <stdio.h>
int main (void)
{
    int a[100],b,*p,n,i;
    p=a;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("enter %d numbers : ",n);
    for(i=0;i<n;i++)
    {
        scanf(" %d",&a[i]);
    }
    b=*p;
    for(i=0;i<n;i++)
    {
        if(*(p+i)<b)
        {
            b=*(p+i);
        }
    }
    
    printf(" %d is the smallest integer\n",b);

}