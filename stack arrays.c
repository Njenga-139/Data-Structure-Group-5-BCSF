#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define max 20
int s[max],stop;
int ele,st[max],sp,ch;
void push(int ele,int s[],int *top);
int pop(int s[],int *top);
void palindrome(int ele,int st[]);
void display(int s[],int *top);
void main()
 {
 stop=-1;
 sp=-1;
 while(1)
  {
   printf("Enter the choice\n");
   printf("Enter 1 to insert an element in to stack\n");
   printf("Enter 2 to delete an element from the stack\n");
   printf("Enter 3 to check an element is pailndrome or not\n");
   printf("Ebter 4 to check status of the stack\n");
   printf("Enter 5 to exit\n");
   scanf("%d",&ch);
     switch(ch)
      {
       case 1: printf("Enter the element to be inserted in to stack\n");
               scanf("%d",&ele);
               push(ele,s,&stop);
              break;
       case 2: ele = pop(s,&stop);
               printf("Element poped is %d\n",ele);
              break;
   case 3: printf("Enter the element to check whether it is palindrome or not\n");
              scanf("%d",&ele);
              palindrome(ele,st);
              break;
       case 4: printf("The status of the stack is \n");
              display(s,&stop);
              break;
       case 5: exit(0);
       }
    }
}
void push(int ele,int s[],int *stop)
   {
    if(*stop>max-1)
    printf("stack overflow\n");
    else
     {
      s[++*stop]=ele;
     }
   }
int pop(int s[],int *top)
  {
    if(*top == -1)
    printf("stack overflow\n");
     else
      return(s[(*top)--]);
  }
void palindrome(int ele,int st[])
   { 
