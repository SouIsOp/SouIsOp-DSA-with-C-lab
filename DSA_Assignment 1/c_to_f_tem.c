#include<stdio.h>  
 int main()   
{   
  float fahrenheit, centigrade; 
  printf("Enter temperature in centigrade: ");
  scanf("%f",&centigrade); 
  fahrenheit =( (centigrade*9)/5)+32;  
  printf("Temperature in fahrenheit is:  %.2f",fahrenheit);  
  return 0;  
}  