#include <stdio.h>
#include <stdlib.h>

  

void insetionSort(int arr[],int n){
  for(int i=1; i<n; i++){
int curr=arr[i];
   int j=i-1;
    while(j>=0 && curr<arr[j])
    {
          arr[j+1]=arr[j]; 
        j--;
    }
    arr[j+1]=curr;
  }
}
void printArray(int arr[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
int main()
{
 int arr[]={8,6,7,7,1,9,9};
 int n = sizeof(arr) / sizeof(arr[0]); 
 insetionSort(arr,n);
 printArray(arr,n);
return 0;
}
