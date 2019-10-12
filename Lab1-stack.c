#include<stdio.h>
#include<conio.h>
#define MAX_SIZE 10

int item[MAX_SIZE];
int top=-1;

void Push(int x)
{
 if(top==MAX_SIZE)
  {
   printf("stack overflow\n");
   return;
   }
  printf("enter the number to be pushed  ");
  scanf("%d",&x);
  top=top+1;
  item[top]=x ;
}
void Pop()
{
 if (top==-1)
 {
  printf("stack underflow\n");
  return;
  }
 top=top-1;
 printf("the popped element is %d \n",item[top+1]);
}
void Print()
{
 int i=0;
 printf("stack:") ;
 for(i=0;i<=top;i++)
 {
 printf("  %d  ",item[i]);
 }
 printf("\n\n");
}
void main()
{
int choice=0,x=0;
clrscr();
do
{
printf("enter the choice\n");
printf("1.Push\n 2.Pop\n 3.Print\n 4.Exit..\n");
scanf("%d",&choice);
switch(choice)
{
case 1:{
	Push(x);
	break;
       }
case 2:{
	Pop();
	break;
	}
case 3:{
	Print();
	break;
	}
case 4:{
	exit(0);
	break;
	}
default:printf("invalid input \n");
}
}while(choice>-1);
getch();
}
