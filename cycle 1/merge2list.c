#include <stdio.h>
int main(void)
{
    int m,n,a[30],b[30],i,j,k,c[30];
    printf("Enter values of m and n: ");
    scanf("%d%d",&m,&n);
    printf("Enter values of A \n");
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
    printf("Enter values of B\n");
    for(j=0;j<n;j++)
        scanf("%d",&b[j]);

    i=0;j=0;k=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            c[k]=a[i];
            i++;k++;
        }
        else if(a[i]>b[j])
        {
            c[k]=b[j];
            j++;k++;
        }
        else
        {
            c[k]=b[j];
            i++;j++;k++;
        }
    }
    while(i<m)
    {
        c[k]=a[i++];
        k++;
    }
    while(j<n)
    {
        c[k]=b[j++];
        k++;
    }

    i=0;
    for(i=0;i<k;i++)
        printf("%d ",c[i]);
}