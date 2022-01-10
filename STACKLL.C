#include<stdio.h>
#include<conio.h>

struct node
{
 int data;
 struct node *next;
}
*top=NULL;

void push(int);
void pop();
void Display();

void main()
{
 int choice,value;
 clrscr();
 printf("\n stack using ll\n");
 while(1)
 {
  printf("\n1.push\n2.pop\n3.display\n4.exit\n");
  printf("enter your choice");
  scanf("%d",&choice);

  switch(choice)
  {
   case 1:
   printf("enter the value to be insert:");
   scanf("%d",&value);
   push(value);
   break;

   case 2:
   pop();
   break;

   case 3:
   Display();
   break;

   case 4:
   exit(0);

   default:printf("wrong selection");
  }
 }
}
void push(int value)
{
 struct node *newnode;
 newnode=(struct node*)malloc(sizeof(struct node));
 newnode->data=value;
 if(top==NULL)

  newnode->next=NULL;

 else

  newnode->next=top;
  top=newnode;
  printf("insertion success");
}

void pop()
{
 if(top==NULL)

  printf("stack is empty");

 else
 {
  struct node *temp=top;
  printf("deleted elementr:%d",temp->data);
  top=temp->next;
  free(temp);
 }
}
void Display()
{
 if(top==NULL)
  printf("stack is empty");
 else
 {
  struct node *temp=top;
  while(temp->next!=NULL)
  {
   printf("%d--->",temp->data);
   temp=temp->next;
  }
  printf("%d--->NULL",temp->data);
 }
}