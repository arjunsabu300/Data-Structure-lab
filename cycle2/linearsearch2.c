#include <stdio.h>
int main(void)
{
    char c;
    int a[30],key,i,j,m;
    printf("enter the no.of elements : ");
    scanf("%d",&m);
    printf("enter elements\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);
    }
    do
    {
        printf("enter number to be searched : ");
        scanf("%d",&key);
        for(i=0;i<m;i++)
        {
            if(a[i]==key)
            {
                break;
            }
        }
        if(i==m)
        {
            printf("%d not found\n",key);
        }
        else
        {
            printf("%d found\n",key);
        }
        printf("do you want to continue (Y/N): ");
        scanf(" %c",&c);
    }while(c!='n' && c!='N');


}