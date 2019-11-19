#include<stdio.h>
#define n 5
int top=-1;
int stack[n];
int push(int n1)
{
	if (top==n-1)
	{
		printf("the stack is full");
	}
	else
	{
		top=top+1;
		stack[top]=n1;
	}
}
int pop()
{
	if (top==-1)
	{
		printf("the stack is empty\n");
	}
	else
	{
		printf("the deleted no. is %d\n",stack[top]);
		top=top-1;
	}
}
int display()
{
	if (top==-1)
	{
		printf("the stack is empty\n");
	}
	else
	{
		int i;
		printf("the elements in the stack at present are :");
		for(i=0;i<=top;i++)
		{
			printf("%d,",stack[i]);
		}
		printf("\n");
	}
}
int main()
{
	int x,a;
	label:
	printf("enter 1 for push\n");
	printf("enter 2 for pop\n");
	printf("enter 0 to exit\n");
	printf("enter your choice : ");
	
	if (x==1)
	{
		printf("enter the no. you want to push : ");
		scanf("%d",&a);
		push(a);
		display();
		goto label;
	}
	else if (x==2)
	{
		pop();
		display();
		goto label;
	}
	else 
	{
	}
}

