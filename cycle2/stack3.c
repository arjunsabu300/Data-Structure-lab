#include <stdio.h>
int top =-1;
#define size 20
//int a[size];
void push(int a[], int item);
int pop(int a[]);

int main(void)
{
    int a[size];
    push(a,10);
    push(a,20);
    push(a,30);
    printf("%d\n",pop(a));

    for (int i = 0; i <=top; i++) // Iterate from 0 to top
    {
        printf("%d\n",a[i]);
    }

    return 0; // Added return statement to indicate successful program execution
}

void push(int a[], int item)
{
// Use the top variable declared in main
    if (top == size - 1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        top++;
        a[top] = item;
    }
}

int pop(int a[])
{ // Use the top variable declared in main
    int tm;
    if (top == -1)
    {
        printf("Stack underflow\n");
        return -1; // Return a sentinel value indicating underflow
    }
    else
    {
        tm = a[top];
        top--;
        return tm;
    }
}
