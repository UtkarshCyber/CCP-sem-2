#include <stdio.h>
int main()
{
    int n, sum=0, firstDigit, lastDigit;
    printf("Enter number = ");
    scanf("%d", &n);
    
    lastDigit = n % 10;
    
    printf(" ones place digit = %d\n\n",lastDigit);
    return 0;
}