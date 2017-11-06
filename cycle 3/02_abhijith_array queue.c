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





int enque(int x)
{
  if(quefull())
    { printf("the que is full\n");
      return 0;
    } 
  rear++;
  a[rear]=x;
  return 1;
}





int delque()
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
  int ch,x;
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
          enque(x);
          break;
      case 2:
          delque();
          break;
      case 3:
          printq();
          break;
      case 4:
          exit(0);

    }
  }
}


