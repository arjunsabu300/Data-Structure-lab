#include <stdio.h>
int main(void)
{
    char c;
    int a[30],i,j,key,m,bot,top,mid;
    printf("enter no.of elements : ");
    scanf("%d",&m);
    printf("enter the elements : ");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    do
    {
        printf("enter number to be searched : ");
        scanf("%d",&key);
        top=0;bot=m-1;
        while(top<=bot)
        {
            mid=(top+bot)/2;
            if(a[mid]==key)
            {
                printf("%d found\n",key);
                break;
            }
            else if(a[mid]>key)
            {
                bot=mid-1;
            }
            else
            {
                top=mid+1;
            }
        }
        if(top>bot)
        {
            printf("%d not found\n",key);
        }
        printf("do yo want to continue (Y/N) : ");
        scanf("  %c",&c);
    }while(c!='n'&& c!='N');
}