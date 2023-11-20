#include <stdio.h>
#include <string.h>
int main (void)
{
    char str[1000];
    int chrindex[256];
    int i=0,count=0,currentstr=0,max=0,len=0,start=0;
    printf("enter the string : ");
    scanf("%s",str);
    while(str[i]!='\0')
    {
        i++;
    }
    len=i;
    for(i=0;i<256;i++)
    {
        chrindex[i]=-1;
    }
    for(i=0;i<len;i++)
    {
        if(chrindex[str[i]]>=currentstr)
        {
            currentstr=chrindex[str[i]]+1;
        }
        chrindex[str[i]]=i;
        if (i-currentstr+1>max)
        {
            max=i -currentstr+1;
            start = currentstr;
        }
    }
    printf("Length of longest substring without repeating characters: %d\n", max);
    printf("Longest substring: ");
    for (i=start;i<=start+max-1;i++) 
    {
        printf("%c",str[i]);
    }
    printf("\n");


}