#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *link;
};


int push(struct node **p)
{
	int val;
	struct node *newnode;
	printf("enter the data to be entred\n");
	scanf("%d",&val);
	newnode=(struct node*)malloc(sizeof(struct node));
	if(newnode==NULL)
	{	printf("overflow\n");
		return 0;
	}

	newnode->data=val;
	newnode->link=*p;
	*p=newnode;
	return 1;

}

int pop(struct node **p)
{
	if(*p==NULL)
	{
		printf("empty stack!!\n");
		return 0;
	}
	struct node *temp;
	temp=*p;
	*p=(*p)->link;
	printf("the popped eelement is %d\n",temp->data);
	free(temp);
}

int print(struct node *p)
{
	if(p==NULL)
	{
		printf("the tack is empty\n");
		return 0;
	}
	while(p!=NULL)
	{
	
		printf("%d\n",p->data);
	p=p->link;
	}
}

void main()
{
	struct node *p=NULL;
	int i;
	while(1)
	{
	printf("enter the option\n");
	printf("1:insert into stack\n2:pop\n3:print\n4:exit\n");
	scanf("%d",&i);
	
	switch(i)
	{
	case 1 :
			push(&p);break;
	case 2 :
			pop(&p);break;
	case 3 :
			print(p);break;
	case 4 :
			exit(0);
}
}
}


