#include<stdio.h>
#include<conio.h>
#define max 50

struct student
{
char name[20];
char USN[10];
char email[30];
};
struct student s[max];
int top=-1;
int isempty()
{
 if(top==-1)
 return 1;
 else
 return 0;
}
int isfull()
{
 if(top==(max-1))
  return 1;
  else
  return 0;
 }

void push()
{
if(isfull())
{
  printf("Auditorium is full\n");
 }
 else
 {
  top=top+1;
  printf("enter the name of student \n ");
  scanf("%s",&s[top].name);
  printf("enter the USN of student \n ");
  scanf("%s",&s[top].USN);
  printf("enter the email id of student \n ");
  scanf("%s",&s[top].email);
 }
}
void pop()
{
 if(isempty())
 {
 printf("Auditorium is empty\n");
 }
 else
 {
   printf("the name , USN ,email id of student out of hall is %s  %s  %s\n",s[top].name,s[top].USN,s[top].email);
  top=top-1;
 }

}
void display()
{
 int i;
 for(i=0;i<top;i++)
 {
  printf("   %s   %s   %s  \n",s[i].name,s[i].USN,s[i].email);
 }
 printf("\n\n");
}
void main()
{
int choice;
clrscr();
do
{
printf("1.push\n 2.pop\n 3.display\n 4.exit...\n");
printf("enter the choice\n");
scanf("%d",&choice);
switch (choice)
{
 case 1:{
	 push();
	 break;
	}
 case 2: {
	 pop();
	 break;
	}
 case 3:{
	display();
	break;
       }
 case 4: {
	  exit(0);
	  break;
	 }
 default: printf("invalid error\n");
 }
}while(choice>-1);
}



