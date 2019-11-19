#include<stdio.h>
#define n 5
int f=-1;
int r=-1;
int qu[n];
int en(int n1)
{
	if (r==n-1)
	{
		printf("the queue is full\n");
	}
	else
	{
		r=r+1;
		f=0;
		qu[r]=n1;
	}
}
int de()
{
	if (r==-1)
	{
		printf("the queue is empty\n");
	}
	else
	{
		int i;
		printf("the deleted no. is %d\n",qu[f]);
		for(i=0;i<r;i++)
		{
			qu[i]=qu[i+1];
		}
		r=r-1;
	}
}
int display()
{
	if (r==-1)
	{
		printf("the stack is empty\n");
	}
	else
	{
		int i;
		printf("the elements in the stack at present are :");
		for(i=f;i<=r;i++)
		{
			printf("%d,",qu[i]);
		}
		printf("\n");
	}
}
int main()
{
	int x,a;
	label:
    printf("enter 1 for enqueue\n");
	printf("enter 2 for dequeue\n");
	printf("enter 0 to exit\n");
	printf("enter your choice : ");
	scanf("%d",&x);
	if (x==1)
	{
		printf("enter the no. you want to enqueue : ");
		scanf("%d",&a);
		en(a);
		display();
		goto label;
	}
	else if (x==2)
	{
		de();
		display();
		goto label;
	}
	else 
	{
	}
}
