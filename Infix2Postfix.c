#include<stdio.h>
#include<ctype.h>
#define SIZE 50
char stack[SIZE];
int top=-1;
push(char elem)
{
stack[++top]=elem;
}

char pop()
{
 return(stack[top--]);
 }
 
 int priority(char symbol)
 {
 if(symbol== '^')
 {
 return(3);
 }
 else if(symbol== '*' || symbol== '/' )
 {
 return(2);
 }
 else if(symbol== '+' || symbol== '-')
 {
 return(1);
 }
 else {
 return(0);
 }
 }
 
 
 void main()
 {
 char infix[50],postfix[50],ch,elem,d;
 int i=0,k=0,l=0,a=0,b=0;
 printf("Enter Infix expression\n");
 scanf("%s",infix);

while((d=infix[l++])!='\0')
{
 if(d=='(')
  a++;
  else if (d==')')
  b++;
}
if(a==b)
{
 while((ch=infix[i++])!='\0' )
 {
 if(ch == '(')
 {
     push(ch);
 }
 else if(isalnum(ch)) 
 {
    postfix[k++]=ch;
 }
 else if(ch==')')
 {
     while(stack[top] !='(')
     postfix[k++]=pop();
     elem=pop();
 }
 else
 {
   while(priority(stack[top]) >=priority(ch))
        postfix[k++]=pop();
  push(ch);
  }
  }
  while(top!=-1)
   postfix[k++]=pop();
   postfix[k]='\0';
   printf("Postfix expression=%s\n",postfix);
}

 else
 {
    printf("Invalid expression\n");
 }
 } 