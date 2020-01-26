#include <stdio.h>
#include <stdlib.h>
#define N 5 //define sie of stack
int stack[N];
int top = -1;
void push()
{
    int x;
    printf("Enter data: ");
    scanf("%d", &x);
    if (top == N - 1)
        printf("Overflow\n\n");
    else
    {
        top++;
        stack[top] = x;
    }
}
void pop()
{
    int popitem;
    if (top == -1)
        printf("Underflow\n\n");
    else
    {
        popitem = stack[top];
        top--;
        printf("%d\n", popitem);
    }
}

void peek()
{
    if (top == -1)
        printf("Stack is empty");
    else
    {
        printf("%d\n", stack[top]);
    }
}

void display()
{
    int i;
    if (top == -1)
        printf("Stack is empty\n\n");
    else
    {
        for (i = top; i >= 0; i--)
            printf("%d\n", stack[i]);
    }
}

void main()
{
    int choice;
    printf("1)Push\n2)Pop\n3)Peek\n4)Display\n5)Exit\n\nEnter Your choice: ");
    scanf("%d", &choice);
    if (choice == 1)
        push();
    else if (choice == 2)
        pop();
    else if (choice == 3)
        peek();
    else if (choice == 4)
        display();
    else if (choice == 5)
        exit(0);
    else
        printf("Invalid choice\n\n");
    main();
}
