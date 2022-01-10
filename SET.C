#include<stdio.h>
void Input();
void Display();
void Union();
void Insertion();
void Difference();
int a[]={0,0,0,0,0,0,0,0,0};
int b[]={0,0,0,0,0,0,0,0,0};
int c[]={0,0,0,0,0,0,0,0,0};
void main()
{
int ch;
clrscr();
printf("*** Set operation *** \n");
do
{
   printf("\n 1.Input\n 2.Union \n 3.Insertion\n 4.Difference\n 5.Exit \n");
   printf("\n Enter choice:");
   scanf("%d",&ch);
   switch(ch)

   {
      case 1:Input();
	     break;
      case 2:Union();
	     break;
      case 3:Insertion();
	     break;
      case 4:Difference();
	     break;
      case 5:exit(0);
      Default: printf("\n ** Invalid choice **\n");
    }
}
      while(ch!=5);
}
void Input()
{
   int n1,n2,x,i;
   printf("\n Enter size of SET1:");
   scanf("%d",&n1);
   printf("\n Enter elements of SET1:");
   for(i=1;i<=n1;i++)
   {
      scanf("%d",&x);
      a[x]=1;
   }
   printf(" \n Enter size of SET 2:");
   scanf("%d",&n2);
   printf(" \n Enter elements of SET2:");
   for(i=1;i<=n2;i++)
   {
      scanf("%d",&x);
      b[x]=1;
   }
      printf("\n SET1: {");
      for(i=1;i<=9;i++)
      {
	 printf("%d",a[i]);
      }
	 printf(" }");
	 printf(" \n SET2 :");
	 for(i=1;i<=9;i++)
	 {
	    printf("%d",b[i]);
	 }
}
void Display(int c[])
{
  int i;
  printf("\n \t \t {");
  for(i=1;i<=9;i++);
  {
     if(c[i]!=0)
     printf("%d",i);
  }
     printf("}");
}
void Union()
{
  int c[10],i;
  for(i=1;i<=9;i++)
  {
     if(a[i]!=b[i])
     c[i]=1;
  }
  printf(" \n SET is:{");
  for(i=1;i<=9;i++)
  {
     printf("%d",c[i]);
  }
  printf("}");
  Display(c);
}
void Insertion()
{
   int c[10],i;
   for(i=1;i<=9;i++)
   {
      if(a[i]==b[i])
      c[i]=a[i];
      else
      c[i]=0;
   }
   printf("IN SET is:{");
   for(i=1;i<=9;i++)
   {
      printf("%d",c[i]);
   }
      printf("}");
      Display(c);
}
void Difference()
{
  int c[10],i;
  for(i=1;i<=9;i++)
  {
     if(a[i]==1&&b[i]==0)
     c[i]=1;
     else
     c[i]=0;
  }
    printf("\n SET is:{");
    for(i=1;i<=9;i++)
    {
       printf("%d",c[i]);
    }
       printf("}");
       Display(c);
}


