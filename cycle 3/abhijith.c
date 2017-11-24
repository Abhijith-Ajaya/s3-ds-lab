#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
}*p=NULL,*newnode,*temp;
int insert()
{
	int x;
	printf("enter the value you want to input ");
	scanf("%d",&x);
	newnode=malloc(sizeof(struct node));
	if(newnode==NULL)
	{
		printf("error");
		return 0;
	}
	newnode->data=x;
	newnode->link=NULL;
	if(p==NULL)
		p=newnode;
	else
	{
		for(temp=p;temp->link!=NULL;temp=temp->link);
		temp->link=newnode;
	}
	return 1;
}
	
int print()
{
	if(p==NULL)
		{
			printf("empty list\n");
			return 0;
		}
			
	for(temp=p;temp!=NULL;temp=temp->link)
	{
		printf("%d\n",temp->data);
	}
return 1;			
}

int reverse(int x)
{
	struct node *t1,*t2,*t3,*t4;
	for(t1=p;t1->link->data!=x;t1=t1->link);
	t2=t1->link;
	t3=t2->link;
	if(t3==NULL)
	{
		printf("it is the the last element ....cannot swap");
		return 0;
	}	
	t4=t3->link;
	t1->link=t3;
	t2->link=t4;
	t3->link=t2;
		
return 1;
}
	
	
int main()
{
int n,i,x;
printf("enter the number of element ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	insert();
}

printf("enter the element to be swapped with the next element ");
scanf("%d",&x);
reverse(x);
print();
}
	
	




