#include <stdio.h>
int main(void)
{
    int a[30],i,j,n,*p,temp;
    p=a;
    printf("enter no.of elemets n :");
    scanf("%d",&n);
    printf("enter elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(*(a+j)>*(a+j+1))
            {
                temp=*(a+j);
                *(a+j)=*(a+j+1);
                *(a+j+1)=temp;
            }
        }
    }
    printf("SORTED LIST \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }
    
}