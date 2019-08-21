#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 50
char stack[50],postfix[50];
int top=-1;

int isfull()
{
 if(top==(max-1))
  return 1;
 else
  return 0;
}

int isempty()
{
 if(top==-1)
  return 1;
 else
  return 0;
}

char pop()
{
  int flag=0;
  char item;
 if(isempty())
  flag=1;
  else
  {
   item=stack[top];
   top=top-1;
   return item;
  }
}

void push(char b)
{
 int flag=0;
 if(isfull())
  flag=1;
 else
  {
   top=top+1;
   stack[top]=b;
  }
}

int precedence(char b)
{
  if(b=='+'||b=='-')
   return 1;
  else if(b=='*'||b=='/'||b=='%')
  return 2;
  else if(b=='^')
  return 3;
}

void infixpostfix(char infix[])
{
 int i,p;
 char *symbol;
 p=0;
 for(i=0;i<strlen(infix);i++)
 {
  *symbol=infix[i];
  if(*symbol=='(')
	     {
	     push(*symbol);
	     }
   else if(*symbol==')')
	  {
	     while(pop()!='(')
	     {
	      postfix[p++]=pop();
	     }
	   }
   else if(*symbol=='+' ||*symbol=='-'||*symbol=='*'||*symbol=='/'||*symbol=='%'||*symbol== '^'){
								while(!isempty() && precedence(stack[top])>=precedence(*symbol))
								 {
								  postfix[p++]=pop();
								  }
								  push(*symbol);
								}
   else
    postfix[p++]=*symbol;

 }
  while(!isempty())
  {
   postfix[p++]=pop();
  }
  printf("Postfix expression is %s",postfix);
}

void main()
{
 char infix[max],postfix[max];
 clrscr();
 printf("enter postfix expression \n");
 gets(infix);
 infixpostfix(infix);


 getch();
}
