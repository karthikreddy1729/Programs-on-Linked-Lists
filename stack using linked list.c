//stack using dynamic memory(linked list)
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
struct node* top;
int islength()
{
    struct node* p;
	p=top;
	int i=1;
	while(p->link!=NULL)
	{
		p=p->link;
		i++;
	}
	return i;
}
int push(int n)
{
	struct node* temp;
	struct node* p;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=n;
	temp->link=NULL;
	p=top;
	if(top==NULL)
	{
		top=temp;
	}
	else
	{
		temp->link=top;
		top=temp;
	}
}
int pop()
{
	struct node* p;
	p=top;
	if(top==NULL)
	{
		printf("the stack is empty\n");
	}
	else
	{
		top=top->link;
		p->link=NULL;
		free(p);
	}
}
int display()
{
	printf("the elements in the stack from top to bottom are : ");
	struct node* p;
	p=top;
	int j=0;
	if(top==NULL)
	{
		printf("the stack is empty\n");
	}
	else
	{
		while(j<islength())
		{
			printf("%d ",p->data);
			p=p->link;
			j++;
		}
	}
	printf("\n");
}
int main()
{
	int num,n;
	while(1)
	{
		printf("1.for push\n");
	    printf("2.for pop\n");
	    printf("3.for exit\n");
	    printf("now enter your choice :");
	    scanf("%d",&num);
	    switch(num)
	    {
	    	case 1:
	    	printf("enter the number that is needed to be added :");
	    	scanf("%d",&n);
	    	push(n);
	    	display();
	    	break;
	    	case 2:
	    	pop();
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
