using namespace
#include<stdio.h>
#include<stdlib.h>
#define max 50

void enqueue(int a[max],int *f,int *r)
{
 int x;
 printf("enter the number to be inserted\n");
 scanf("%d",&x);
 if(*r==(max-1))
 {
     printf("Queue is full\n");
  }
 else if(*f==-1&&*r==-1)
 {
     *f=*r=0;
     a[*r]=x;

 }
 else
  {
      *r = *r + 1;
      a[*r]=x;
}
}
void dequeue(int a[max],int *f,int *r)
{
 if(*f>*r)
  printf("queue is empty\n");
 else
 {
     printf("number deleted is :%d\n",a[*f]);
     *f=*f+1;
 }

}
void display(int a[max],int *f,int *r)
{
  int i;
  printf("elements of queue\n");
  for(i=*f;i<=*r;i++)
  {
    printf(" %d\n",a[i]);
  }
}
int main()
{
 int front=-1,rear=-1;
 int a[max];
 int n;
 do
 {
     printf("enter the choice \n");
     printf("1.insert\n");
     printf( "2.delete\n");
     printf( "3.display\n");
     printf( "4.exit..\n");
     printf("%d",&n);
 switch(n)
  {
     case 1:{
             enqueue(a,&front,&rear);
             break;
            }
     case 2:{
             dequeue(a,&rear,&front);
             break;
            }
     case 3:{
             display(a,&rear,&front);
             break;
            }
     case 4:{
             exit(0);
             break;
            }
     default:{
              printf("Invalid Choice\n");
             }
  }
 }while(n>-1);
 return 0;
}



