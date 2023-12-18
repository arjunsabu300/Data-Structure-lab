#include<stdio.h>
#define invalid -999
#define size 5
int s[10],top=-1;
void push(int item)
{
   if(top==(size-1))
   {
      printf("STACK  OVERFLOW!!!!");
   }
   else
   {
     top=top+1;
     s[top]=item;
   }
}
int pop()
{  int item;
   if(top==-1)
   {
      printf("STACK  UNDERFLOW!!!!");
      return invalid;
   }
   else
   {
      item=s[top];
      top=top-1;
      return item;
   }
}
void display()
{  int i;
   if(top==-1)
   {
      printf("Stack Empty!!!!!!\n");
   }
   else
   {
      for(i=0;i<=top;i++)
      {
         printf("%d ",s[i]);
      }
   }
}
void main()
{
   int item,ch,p;
   char choice='y';
   while(choice=='y')
   {   printf("STACK\n1: PUSH \n2: POP \n3: DISPLAY\nEnter Your Choice: ");
       scanf("%d",&ch);
       if(ch==1)
       {
          printf("Enter item to be pushed into stack: ");
          scanf("%d",&item);
          push(item);
       }
       else if(ch==2)
       {  p=pop();
          printf("The popped element is %d\n",p);
       }
       else if(ch==3)
       {
          display();
       }
       else
       {
          printf("Invalid Choice!!!!\n");
       }
       printf("\nDO YOU WANT TO CONTINUE(Y/N):  ");
       scanf("%s",&choice);
   }
}