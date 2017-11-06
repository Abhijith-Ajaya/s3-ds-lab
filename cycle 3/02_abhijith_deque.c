#include<stdio.h>
#include<stdlib.h>
int a[10],n,rear=-1,front=0;

int quefull()
{
  if(rear==(n-1))
  return 1;
  else
  return 0;
}




int queempty()
{
  if(rear<front) return 1;
  else
  return 0;
}


int renque(int x)
{
  if(quefull())
    { printf("the que is full\n");
      return 0;
    } 
  rear++;
  a[rear]=x;
  return 1;
}

int fenque(int x)
{
	 if(quefull())
    { printf("the que is full\n");
      return 0;
    } 
    front--;
    a[front]=x;
    return 1;
}


int fdelque()
{
  int temp;
  if(queempty())
  {  printf("the que is empty\n");
     return 0;
  
  }
  temp=a[front];
  front++;
  printf("the popped element is %d\n",temp);
  return 1;
}

int rdelque()
{
	int temp;
	if(queempty())
	{
		printf("the que is empty\n");
		return 0;
	}
	temp=a[rear];
	rear--;
	printf("the popped element is %d\n",temp);
	return 1;
}

int printq()
{
  int i;
  if(queempty())
  {
    printf("the queue is empty \n");

    return 0;
  }
  for (i=front;i<=rear;i++)
  {
    printf("%d\n",a[i] );

  }
  return 1;
}


int main()
{
  int ch,x,ch2;
  printf("enter the size of  the queue\n");
  scanf("%d",&n);
  while(ch!=4)
  {
    printf("1.add\n2.del\n3.print\n4.exit\n");
    scanf("%d",&ch);
    switch (ch)
    {
      case 1:
          printf("enter the value of element to be added \n");
          scanf("%d",&x);
          printf("1:add to rear\n2.add to front\n");
          scanf("%d",&ch2);
          if(ch2==1)
          	renque(x);
      	  else if (ch2==2)
      		fenque(x);	
          else
          	printf("wrong option\n");
          break;
      case 2:
      		printf("1:delete from rear\n2:delete froom front\n");
      		scanf("%d",&ch2);
      		if(ch2==1)
          		rdelque();
			else if(ch2==2)
				fdelque();
			else
				printf("wrong option\n");	          
          break;
      case 3:
          printq();
          break;
      case 4:
          exit(0);
      }
    }  
}