#include <stdio.h>
int main()
{
    int i = 2, number;
    printf("\n Please Enter the Maximum Limit Value : ");
    scanf("%d", &number);
    printf("\n Even Numbers between 1 and %d are : \n", number);
    while(i <= number)
    {
        printf(" %d\t", i);
        i = i+2;
    }
    return 0;
}