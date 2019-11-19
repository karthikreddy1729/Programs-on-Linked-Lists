#include<stdio.h>
#include<stdlib.h>
#define n 5
int f=-1;
int r=-1;
int qu[n];
int en(int n1)
{
	if ((f==r+1)||(f==0&&r==n-1))
	{
		printf("the queue is full\n");
	}
	else if (f==-1&&r==-1)
	{
		f=0;
		r=0;
		qu[r]=n1;
	}
	else if (r==n-1)
	{
		r=0;
		qu[r]=n1;
	}
	else
	{
		r=r+1;
		qu[r]=n1;
	}
}
int de()
{
	if (f==-1&&r==-1)
	{
		printf("the queue is empty\n");
	}
	else if(f==r)
	{
		printf("the deleted no. is %d\n",qu[f]);
		f=r=-1;
	}
	else if(f==n-1)
	{
		printf("the deleted no. is %d\n",qu[f]);
		f=0;
	}
	else
	{
		printf("the deleted no. is %d\n",qu[f]);
		++f;
		printf("front =%d rear =%d \n",f,r);
	}
}
int display()
{
	if (f==-1&&r==-1)
	{
		printf("the queue is empty\n");
	}
	else
	{
		int i;
		printf("the elements in the queue at present are :");
		for(i=f;i<=r;i++)
		{
			printf("%d ",qu[i]);
		}
		printf("\n");
	}
}
int main()
{
	int x,a;
	while(1)
	{
        printf("enter 1 for enqueue\n");
	    printf("enter 2 for dequeue\n");
	    printf("enter 3 to exit\n");
	    printf("enter your choice : ");
	    scanf("%d",&x);
	    switch(x)
	    {
		    case 1:
		    printf("enter the no. you want to enqueue : ");
		    scanf("%d",&a);
		    en(a);
		    display();
		    break;
		    case 2:
		    de();
		    display();
		    break;
		    case 3:
		    exit(0);
		    break;
		}
	}
}
		