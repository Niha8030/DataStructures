#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head1;
struct node *current1;
struct node *head2;
struct node *current2;
struct node *head3;
struct node *current3;



void insert_beg1();


void create1()
{
    struct node*new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("enter item \n");
    scanf("%d",&new_node->data);
    new_node->next=NULL;

    if(head1==NULL)
    {
        head1=new_node;
        current1=head1;
    }
    else
    {
        current1->next=new_node;
        current1=new_node;
    }
}




void insert_spec1()
{
    struct node *new_node,*temp;
    int pos,i;
     printf("enter position \n");
     scanf("%d",&pos);
    if(pos==1)
    {
        insert_beg1();
    }
    else
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("enter element \n");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        temp=head1;
        for(i=1;i<pos-1;i++)
            temp=temp->next;

        new_node->next=temp->next;
        temp->next=new_node;
    }
}

void display1()
{
    struct node *temp;
    temp=head1;
    while(temp!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void insert_beg1()
{
    struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("enter element \n");
    scanf("%d",&new_node->data);
    if(head1==NULL)
    {
        head1=new_node;
        new_node=head1;
    }
    else
    {
        new_node->next=head1;
        head1=new_node;
    }
}

void del_beg1()
{
 struct node *new_node;
 //new_node=(struct node*)malloc(sizeof(struct node));
 new_node=head1;
 head1=head1->next;
 free(new_node);
}

void del_end1()
{
 struct node *new_node=head1;
 struct node *temp=NULL;
 //new_node=(struct node*)malloc(sizeof(struct node));
 //temp=(struct node*)malloc(sizeof(struct node));
  while(new_node->next!=NULL)
  {
   temp=new_node;
   new_node=new_node->next;
 }
 temp->next=NULL;
 free(new_node);
 //free(temp);
}

void del_spec1()
{
 struct node *new_node=head1;
 struct node *temp=NULL;
 int pos,i;
 //new_node=(struct node*)malloc(sizeof(struct node));
 //temp=(struct node*)malloc(sizeof(struct node));
  printf("Enter position of element to be deleted \n");
  scanf("%d",&pos);
  for(i=1;i<=pos;i++)
   {
   temp=new_node;
   new_node=new_node->next;
   }
 temp->next=new_node->next;
 free(new_node);
 //free(temp);
}

void insert_beg2();


void create2()
{
    struct node*new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("enter item \n");
    scanf("%d",&new_node->data);
    new_node->next=NULL;

    if(head2==NULL)
    {
        head2=new_node;
        current2=head2;
    }
    else
    {
        current2->next=new_node;
        current2=new_node;
    }
}




void insert_spec2()
{
    struct node *new_node,*temp;
    int pos,i;
     printf("enter position \n");
     scanf("%d",&pos);
    if(pos==1)
    {
        insert_beg2();
    }
    else
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("enter element \n");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        temp=head2;
        for(i=1;i<pos-1;i++)
            temp=temp->next;

        new_node->next=temp->next;
        temp->next=new_node;
    }
}

void display2()
{
    struct node *temp;
    temp=head2;
    while(temp!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}

void display3()
{
    struct node *temp;
    temp=head3;
    while(temp!=NULL)
    {
        printf("%d  ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
void insert_beg2()
{
    struct node *new_node;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("enter element \n");
    scanf("%d",&new_node->data);
    if(head2==NULL)
    {
        head2=new_node;
        new_node=head2;
    }
    else
    {
        new_node->next=head2;
        head2=new_node;
    }
}

void del_beg2()
{
 struct node *new_node;
 //new_node=(struct node*)malloc(sizeof(struct node));
 new_node=head2;
 head2=head2->next;
 free(new_node);
}

void del_end2()
{
 struct node *new_node=head2;
 struct node *temp=NULL;
 //new_node=(struct node*)malloc(sizeof(struct node));
 //temp=(struct node*)malloc(sizeof(struct node));
  while(new_node->next!=NULL)
  {
   temp=new_node;
   new_node=new_node->next;
 }
 temp->next=NULL;
 free(new_node);
 //free(temp);
}

void del_spec2()
{
 struct node *new_node=head2;
 struct node *temp=NULL;
 int pos,i;
 //new_node=(struct node*)malloc(sizeof(struct node));
 //temp=(struct node*)malloc(sizeof(struct node));
  printf("Enter position of element to be deleted \n");
  scanf("%d",&pos);
  for(i=1;i<=pos;i++)
   {
   temp=new_node;
   new_node=new_node->next;
   }
 temp->next=new_node->next;
 free(new_node);
 //free(temp);
}

void rev1()
{
    struct node *prev,*next,*current1;
     printf("linked list before reverse:");
     display1();
     current1=head1;
     prev=NULL;
     while(current1!=NULL)
     {
         next=current1->next;
         current1->next=prev;
         prev=current1;
         current1=next;
     }
     head1=prev;
     printf("The reversed linked list is: ");
      display1();
}

void rev2()
{
    struct node *prev,*next,*current2;
     printf("linked list before reverse:");
     display2();
     current2=head2;
     prev=NULL;
     while(current2!=NULL)
     {
         next=current2->next;
         current2->next=prev;
         prev=current2;
         current2=next;
     }
     head2=prev;
     printf("The reversed linked list is: ");
      display2();
}


void concate()
{
    struct node *temp;
    if(head1==NULL)
    {
       head3=head2;
       display2();
    }
    else if(head2==NULL)
    {
        head3=head1;
        display1();

    }
    else
    {
        temp=head3=head1;
        while(temp->next!=NULL)
            temp=temp->next;
        temp->next=head2;
        display3();

    }
}

void sort1()
{
    struct node *p,*q;
    int temp;
    for(p=head1;p!=NULL;p=p->next)
    {
        for(q=p->next;q!=NULL;q=q->next)
        {
            if(p->data>q->data)
            {
                temp=q->data;
                q->data=p->data;
                p->data=temp;
            }
        }
    }
}





void sort2()
{
    struct node *p,*q;
    int temp;
    for(p=head2;p!=NULL;p=p->next)
    {
        for(q=p->next;q!=NULL;q=q->next)
        {
            if(p->data>q->data)
            {
                temp=q->data;
                q->data=p->data;
                p->data=temp;
            }
        }
    }
}





int main()
{
 int choice;
 do
 {
  printf("Menu \n");
  printf("1.Create list 1 \n");
  printf("2.Insert beg for list1 \n");
  printf("3.insert at specific position for list1 \n");
  printf("4.Delete beg for list1 \n");
  printf("5.Delete at specific position for list1 \n");
  printf("6.Delete at the end for list1 \n");
  printf("7.Display for list1\n");
  printf("8.Create list 2 \n");
  printf("9.Insert beg for list2 \n");
  printf("10.insert at specific position for list2 \n");
  printf("11.Delete beg for list2 \n");
  printf("12.Delete at specific position for list2 \n");
  printf("13.Delete at the end for list2 \n");
  printf("14.Display for list2\n");
  printf("15.Reverse list1 \n");
  printf("16.Reverse list2 \n");
  printf("17.Concatenate\n");
  printf("18.Sort list1\n");
  printf("19.Sort list2\n");
  printf("20.Exit \n");
  printf("enter choice \n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
   {
    create1();
    break;
   }
   case 2:
   {
    insert_beg1();
    break;
   }
   case 3:
   {
    insert_spec1();
    break;
   }
   case 4:
   {
    del_beg1();
break;
   }
   case 5:
  {
   del_spec1();
break;
  }
  case 6:
  {
   del_end1();
break;
  }

   case 7:
   {
    display1();
    break;
   }

     case 8:
   {
    create2();
    break;
   }
   case 9:
   {
    insert_beg2();
    break;
   }
   case 10:
   {
    insert_spec2();
    break;
   }
   case 11:
   {
    del_beg2();
break;
   }
   case 12:
  {
   del_spec2();
break;
  }
  case 13:
  {
   del_end2();
break;
  }

   case 14:
   {
    display2();
    break;
   }
    case 15:
   {
    rev1();
    break;
   }
    case 16:
   {
    rev2();
    break;
   }
    case 17:
   {
    concate();
    break;
   }
     case 18:
   {
    sort1();
    break;
   }
     case 19:
   {
    sort2();
    break;
   }
    case 20:
   {
    exit(0);
    break;
   }
   default :
   {
   printf("invalid choice \n");
   }
 }
}while(choice>-1);

 return 0;
}
