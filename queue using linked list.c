#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
struct node* f;
int en(int a)
{
	struct node* r;
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=a;
	temp->link=NULL;
	r=f;
	if(f==NULL)
	{
		f=temp;
		r=f;
	}
	else
	{
		while(r->link!=NULL)
		{
			r=r->link;
		}
		r->link=temp;
	}
}
int de()
{
	struct node* temp;
	temp=f;
	if(f==NULL)
	{
		printf("the queue is empty\n");
	}
	else
	{
		f=f->link;
		temp->link=NULL;
		free(temp);
	}
}
int display()
{
	struct node* p;
	p=f;
	if(f==NULL)
	{
		printf("the queue is empty\n");
	}
	else
	{
		printf("the elements in the queue are ");
		while(p!=NULL)
		{
			printf("%d ",p->data);
			p=p->link;
		}
		printf("\n");
	}
}
int main()
{
	int num,n;
	while(1)
	{
		printf("1.for enqueue\n");
	    printf("2.for dequeue\n");
	    printf("3.for exit\n");
	    printf("now enter your choice :");
	    scanf("%d",&num);
	    switch(num)
	    {
	    	case 1:
	    	printf("enter the number that is needed to be added :");
	    	scanf("%d",&n);
	    	en(n);
	    	display();
	    	break;
	    	case 2:
	    	de();
	    	display();
	    	break;
	    	case 3:
	    	exit(0);
	    	break;
	    	default:
	    	printf("invalid input\n");
	    }
	}
}
