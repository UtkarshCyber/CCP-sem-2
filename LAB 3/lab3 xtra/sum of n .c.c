//C program to find the sum of n natural numbers using functions.
#include <stdio.h>
#include <stdlib.h>
int sum(int n);
int main()
{
	system("cls");
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	int s = sum(n);
	printf("sum = %d\n",s);
}
int sum(int n)
{
	int s=0;
	for(int i=1;i<=n;i++)
	s+=i;
	return s;
}