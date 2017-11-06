#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *p=NULL,*newnode,*first=NULL;


int qempty()
{	if(first==NULL)
	return 1;
	return 0;
}

int insert(int x)
{
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
		{
			printf("overflow\n");
			return 0;
		}
				
	newnode->data=x;
	newnode->link=NULL;

		if(first==NULL) //the first element
			{
				first=p=newnode;
			}
		else
		{
			p->link=newnode;
			p=newnode;
		}	

	return 1;	
}

int deleteq()
{
	if(qempty())
	{
		printf("the queue is empty \n");
		return 0;
	}
	struct node *temp;
	temp=first;
	first=first->link;
	printf("the popped value is %d\n",temp->data);
	free(temp);
	return 1;
}

int printq()
{
	struct node *temp=first;
	if(qempty())
	{
		printf("the queue is empty\n");
		return 0;
	}
	while(temp!=NULL)
		{
			printf("%d\n",temp->data);
			temp=temp->link;

		}
	return 1;

}
void main()
{
	int i,x,ch=0;

	while(ch!=4)
	{
		printf("1.insert\n2.delete\n3.print\n4.exit\nenter the option number\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter the element you want to insert into the queue\n");
				scanf("%d",&x);
				insert(x);
				break;
			case 2:
				deleteq();
				break;
			case 3:
				printq();
				break;
			case 4:
				exit(0);
		}
	}
	
}