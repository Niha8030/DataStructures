#include<conio.h>
#include<stdio.h>
struct student
{
char name[20];
char USN[10];
int sem;
int marks[4];
};
void main()
{
struct student s1;
int i;
clrscr();
printf("Enter name\n");
scanf("%s",&s1.name);
printf("Enter USN\n");
scanf("%s",&s1.USN);
printf("Enter semester\n");
scanf("%d",&s1.sem);
for(i=0;i<5;i++)
{
printf("Enter the marks in subject %d \n",i+1);
scanf("%d",&s1.marks[i]);
}
printf("****DETAILS****\n");
printf("%s\n",s1.name);
printf("%s\n",s1.USN);
printf("%d\n",s1.sem);
for(i=0;i<5;i++)
{
printf("Marks obtained in subject %d is %d\n",i+1,s1.marks[i]);
 }
getch();
}
