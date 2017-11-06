#include<stdio.h>
int a[20],n,i,top=0;


int push(int n, int a[])
{	int x;
	if(top==n-1){ printf("stack is full\n");return 0;}

	printf("enter the number to be added\n");
	scanf("%d",&x);
	a[++top]=x;
	return 1;
}
int pop(int a[])
{
	int temp=a[top];
	if(top==0){printf("nothing to pop\n"); return 0;}
	top--;
	printf("poped element is  %d \n",temp);

}
int printar(int a[])
{
	int temp,ch;
	for(temp=top;temp!=0;temp--)
		printf("%d\n",a[temp] );
}
void main()
{	
	int ch=0;
	
	printf("enter the number of elements\n");
	scanf("%d",&n);
	while(ch!=4)
	{	printf("1.print\n2.push\n3.pop\n4.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printar(a); break;
			case 2:
			push(n,a);break;
			case 3:
			pop(a);break;
			case 4:
			break;
			defaut:
			printf("enter the right option\n");

		}
	}	
}