 //Write a program in C to find the square of any number using the function
#include <stdio.h>
#include <math.h>
int sq(int n);
int main()
{
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	int s = sq(n);
	printf("square = %d\n",s);
}
int sq(int n)
{
	return (int)pow(n,2);
}