#include<stdio.h> 

int main()
{
int a,b,rem,i;
printf("   Give the First number for the Range : \t");
 scanf("%d",&a);
printf("   Give the Final number for the Range : \t");
 scanf("%d",&b);
printf("\t The Even numbers between %d and %d are ",a,b); 
 for(i=a; i<=b; i++)
 {
 rem = i % 2;
 if(rem == 0)
 printf("\t%d",i); 
 }
 return 0; 
 } 