#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct Node
   {
      int data;
      struct Node *link;
   };
   typedef struct Node Node;
   Node *getnode();
main()
{
Node *first;
int choice,item,pos,n;
InitializeLList(&first);
printf("\n creating asingle linkedlist");
printf("\n How many nodes you want to create?:");
scanf("%d",&n);
LListCreate(&first,n);
  while(1)
  {
      printf("\n\n\t Implementation of singly linkedlist \n");
      printf("\n\t\t1. Insertion as a First Node.");
      printf("\n\t\t2. Insertion as a Last Node.");
      printf("\n\t\t3. Insertion as Node at any specific location.");
      printf("\n\t\t4. Deletion of First Node.");
      printf("\n\t\t5. Deletion of Last Node.");
      printf("\n\t\t6. Deletion of any Node.");
      printf("\n\t\t7. Display");
      printf("\n\t\t0. Exit");
      printf("\n\n\t Enter (1/2/3/4/5/6/7/0-");
      scanf("%d",&choice);
      switch(choice)
      {
      case 1: printf("\n Enter the item of information=");
	      scanf("%d",&item);
	      InsertLListfirst(&first,item);
	      break;
      case 2: printf("\n Enter the item of information=");
	      scanf("%d",&item);
	      InsertLListlast(&first,item);
	      break;
      case 3: printf("\n Enter the item of information=");
	      scanf("%d",&item);
	      printf("\n Enter the node number where you want to insert the item=");
	      scanf("%d",&pos);
	      InsertLListAtAny(&first,item,pos);
	      break;
      case 4:  DeleteLListFirst(&first);
	      break;


     case 6:  printf("\n Enter the node number you want to delete=");
	      scanf("%d",&pos);
	      DeleteLListAtAny(&first,pos);
	      break;
     case 7:  TraverseLList(first);
	      break;
     case 0:  exit(0);
     }
  }
}
InitializeLList(Node **first)
{
    (*first)=NULL;

}
LListCreate(Node **f,int n)
{
   Node *temp,*current;
   int i,item;
   for(i=1;i<=n;i++)
   {
    printf("Enter the data field of node# %d",i);
    scanf("%d",&item);
    temp=getnode();
    temp->data=item;
    temp->link=NULL;
    if(*f==NULL)
       *f=temp;
    else
       current->link=temp;
       current=temp;
   }
}
TraverseLList(Node *first)
{
    printf("\n Start->");
    while(first!=NULL)
    {
      printf("%d->",first->data);
      first=first->link;
    }
      printf("End\n");
}
InsertLListfirst(Node **first,int item)
{
    Node *temp;
    temp=getnode();
    if(temp==NULL)
    {
     printf("\n Unable to create a new code");
     return;
    }
     temp->data=item;
     temp->link=(*first);
     (*first)=temp;
}
InsertLListlast(Node **first,int item)
{
  Node *temp,*current;
  temp=getnode();
  if(temp==NULL)
  {
     printf("\n Unable to create a new node");
     return;
  }
  temp->data=item;
  temp->link=NULL;
  if(*first==NULL)
    (*first)=temp;
  else
  {
  current=(* first);
  while(current->link!=NULL)
  current=current->link;
  current->link=temp;
  }
}
InsertLListAtAny(Node **first,int item,int pos)
  {
     Node *current,*previous,*temp;
     int i;
     if(temp==NULL)
     {
	printf("\n Unable to create a new node");
	return;
     }
     if((*first==NULL)||(pos==1))
     {
	temp->data=item;
	temp->link=(*first);
	(*first)=temp;
	return;
     }
	current=(*first)->link;
	previous=(*first);

	while(current!=NULL)
	{
	   if((i+1)==pos)
	      break;
	   else
	   {
	      previous=current;
	      current=current->link;
	      i++;
	   }
	}
	   temp->data=item;
	   temp->link=current;
	   previous->link=temp;
      }
DeleteLListFirst(Node **first)
{
   Node *current;
   int item;
   if(*first==NULL)
   {
      printf("\n list is empty");
      return;
   }
	 current=(*first);
	 item=current->data;
	 (*first)=(*first)->data;
	 freenode(current);
	 printf("\n Deleted item=%d",item );
}
DeleteLListAtAny(Node **first,int pos)
{
   Node *current,*previous;
   int item,i;
   if(*first==NULL)
   {
   printf("\n list is empty");
   return;
   }
   if(pos==1)
   {
      current=(*first);
      item=current->data;
      (*first)=(*first)->link;
      freenode(current);
      printf("\n Deleted item=%d",item);
      return;
   }
   current=(*first)->link;
   previous=(*first);
   i=2;
   while(current!=NULL)
   {
      if(i==pos)
      {
      previous->link=current->link;
      item=current->data;
      freenode(current);
      printf("\n Deleted item=%d",item);
      }
      else
      {
	 previous=current;
	 current=current->link;
      }
      i++;
   }
}
   Node *getnode()
   {
      Node *P;
      P=(Node *)malloc(sizeof(Node));
      return(P);
   }
      freenode(Node *P)
      {
	 free(P);
      }












