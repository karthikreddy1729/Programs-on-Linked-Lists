#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* link;
};
struct node* root;
void insert(int k)
{
    struct node* t;
    t=(struct node*)malloc(sizeof(struct node));
    t->data=k;
    t->link=NULL;
    if(root==NULL)
    {
        root=t;
    }
    else
    {
        if(k<root->data)
        {
            t->link=root;
            root=t;
        }
        else
        {
            struct node *p,*q;
            p=root;
            while(p!=NULL && p->data<k)
            {
                q=p;
                p=p->link;
            }
            if(p==NULL)
            {
                q->link=t;
            }
            else
            {
                q->link=t;
                t->link=p;
            }
        }
    }
}
int delete(int k)
{
    if(root==NULL)
    {
        printf("there are no elements in the linked list\n");
    }
    else
    {
        if(root->data==k)
        {
            struct node *m;
            m=root;
            root=root->link;
            m->link=NULL;
            free(m);
            return 0;
        }
        struct node *t,*p;
        t=root;
        while(t!=NULL && t->data!=k)
        {
            p=t;
            t=t->link;
        }
        if(t==NULL)
        {
            printf("the required element is not present in the list \n");
        }
        else
        {
            p->link=t->link;
            t->link=NULL;
            free(t);
        }
    }
    return 0;
}
int display()
{
    if(root==NULL)
    {
        printf("there are no elements in the list \n");
        return 0;
    }
    printf("the elements in the linked list are :");
    struct node* t;
    t=root;
    while(t!=NULL)
    {
        printf("%d ",t->data);
        t=t->link;
    }
    printf("\n");
    return 0;
}
int main()
{
    int n,temp;
    while(1)
    {
        printf("1.to insert\n2.to delete\n3.to display\n4.to exit\nnow enter your choice :");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            printf("enter t6he number to insert :");
            scanf("%d",&temp);
            insert(temp);
            break;
        case 2:
            printf("enter the number to delete :");
            scanf("%d",&temp);

            delete(temp);
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        }
    }
}
