#include<stdio.h>
#include<stdlib.h>
int a[10],topl=-1,topu,n,temp;
int stackfull()
{
	if((topl==n-1)||(topu==0)||(topl+1==topu))
		return 1;
	return 0;
}

int stackempty(int s)
{
	if(s==1)
	{
		if(topl==-1)
			return 1;
	}
	if(s==2)
	{
		if(topu==n-1)
			return 1;
	}
	return 0;
}
int push(int x,int s)
{
	if(stackfull())
		{printf("the stack is full\n");
		return 0;
		}
	else if(s==1)
	{
		topl++;
		a[topl]=x;
	}
	else if(s==2)
	{
		topu--;
		a[topu]=x;
	}
	else
		printf("wrong option\n");

}
int pop(int s)
{
	if(stackempty(s))
	{
		printf("the stack is empty\n");
		return 0;
	}
	if(s==1)
	{
		temp=a[topl];
		topl--;
		printf("the element popped is %d\n",temp);
	}
	else if(s==2)
	{
		temp=a[topu];
		topu++;
		printf("the element popped is %d\n",temp);
	}
	else
		{
			printf("wrong option\n");
			return 0;
		}
	return 1;
}
int printstack(int s)
{
	if(stackempty(s))
	{
		printf("the stack is empty\n");
		return 0;
	}
	else if(s==1)
	{
		int i=topl;
		for(i;i>=0;i--)
			printf("%d\n",a[i]);

	}
	else if(s==2)
	{
		int i=topu;
		for(i;i<n;i++)
		{
			printf("%d\n",a[i]);
		}
	}
	else
	{
		printf("wrong option\n");
		return 0;

	}
	return 1;

}
void main()
{
	int s,ch=0,ch2,x;
	printf("enter the size of the stack\n");
	scanf("%d",&n);
	topu=n-1;
	while(ch!=4)
	{
		printf("1.push\n2.pop\n3.print\n4.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter to stack\n1:S\n2:Q\n");
				scanf("%d",&ch2);
				printf("enter the element to push\n");
				scanf("%d",&x);
			if(ch2==1)
			{
				push(x,1);
			}
			else if(ch2==2)
			{
				push(x,2);

			}
			break;
			case 2:
				printf("pop from which stack ??\n1:S\n2:Q\n");
				scanf("%d",&ch2);
				if(ch2==1)
				{
					pop(1);
				}
				else if(ch2==2)
				pop(2);
				else
				printf("wrong option\n");
				break;
			case 3:
				printf("print which stack ??\n1:S\n2:Q\n");
				scanf("%d",&ch2);
				if(ch2==1)
				{
					printstack(1);
				}
				else if(ch2==2)
				{
					printstack(2);
				}
				else
				printf("wromg option\n");
				break;
				case 4:
				exit(0);
		}
	}
}
