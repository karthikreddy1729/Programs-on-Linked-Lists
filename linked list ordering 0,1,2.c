#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node* link;
};
struct node* f;
struct node* r;
int islength()
{
    struct node* p;
	p=f;
	int i=1;
	while(p->link!=NULL)
	{
		p=p->link;
		i++;
	}
	return i;
}
int en(int a)
{
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=a;
	temp->link=NULL;
	if(f==NULL)
	{
		f=temp;
		r=f;
	}
	else
	{
		r->link=temp;
		r=r->link;
	}
}
void sort()
{
	struct node* pre;
	struct node* curr;
	struct node* p;
	curr=f;
	pre=NULL;
	int i=0;
	while(i<islength())
	{
		p=curr;
		if(curr->data==0)
		{
			if(pre==NULL)
			{
				pre=curr;
				curr=curr->link;
			}
			else
			{
				pre->link=curr->link;
			    curr=curr->link;
			    p->link=f;
			    f=p;
			}
		}
		else if(curr->data==2)
		{
			if(pre==NULL)
			{
				curr=curr->link;
			    r->link=p;
			    r=r->link;
			    p->link=NULL;
			}
			else
			{
				pre->link=curr->link;
			    curr=curr->link;
			    r->link=p;
			    r=r->link;
			    p->link=NULL;
			}
		}
		else
		{
			pre=curr;
		    curr=curr->link;
		}
		i++;
	}
}
int display()
{
	struct node* p;
	p=f;
	if(f==NULL)
	{
		printf("the list is empty\n");
	}
	else
	{
		int i=0;
		while(i<islength())
		{
			printf("%d ",p->data);
			p=p->link;
			i++;
		}
		printf("\n");
	}
}
int main()
{
	int num,n;
	while(1)
	{
		printf("1.for inserting\n");
	    printf("2.for sorting\n");
	    printf("3.for exit\n");
	    printf("now enter your choice :");
	    scanf("%d",&num);
	    switch(num)
	    {
	    	case 1:
	    	printf("enter the number that is needed to be added (0/1/2) :");
	    	scanf("%d",&n);
	    	if(n==0||n==1||n==2)
	    	{
	    		en(n);
	    		printf("the elements in the list before sorting is :");
	    	    display();
	    	}
	    	else
	    	{
	    		printf("invalid input data\n");
	    	}
	    	break;
	    	case 2:
	    	sort();
	    	printf("the elements in the list after sorting is :");
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
