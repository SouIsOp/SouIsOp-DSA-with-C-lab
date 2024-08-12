#include<stdio.h>
int main()
{
int arr[10];
int i;
printf("Enter 10 array elements:\n");
for(i=1;i<=10;i++)
{
 printf("Element %d :",i);
 scanf("%d",&arr[i]);
}
printf("Elements in array in reverse are:\n");
for(i=10;i>=1;i--)
{
    printf("%d",arr[i]);
    printf("\n");
}
return 0;
}