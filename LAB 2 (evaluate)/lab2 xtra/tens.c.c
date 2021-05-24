 #include <stdio.h>
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);
	n/=10;
	int x = n%10;
	printf("the digit at ten's place : %d\n",x);
}