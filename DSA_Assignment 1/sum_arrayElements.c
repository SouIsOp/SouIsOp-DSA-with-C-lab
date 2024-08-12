#include<stdio.h>

int main()
{
    int arr[100], size, i, sum = 0;
    printf("Enter array size\n");
    scanf("%d",&size);
    
    //Get all elements using for loop and store it in array
    printf("Enter array elements\n");
    for(i = 0; i < size; i++)
          scanf("%d",&arr[i]);
          
    //add all elements to the variable sum
    for(i = 0; i < size; i++)
          sum = sum + arr[i];   //same as sum += arr[i];
    
    printf("Sum of the array = %d\n",sum);
    
    return 0;
}