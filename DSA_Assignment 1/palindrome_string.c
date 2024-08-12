#include<stdio.h>
#include<string.h>  // used for gets(str)and strlen(str) functions
#include<stdlib.h>  //used for exit(0) function
int main()
{
    int length,k;
    char str[100];
    printf("Enter a string:[All letters in uppercase or in lowercase]");
    gets(str);
    length= strlen(str);
    length = length-1;  // length always one character plus then the original string so we used length-1
    k=0;                // k used for store the string and check it to the original length of it
    while(length>k)
    {
        if(str[length]!=str[k])
        {
            printf("%s is not palindrome",str);
            exit(0);
        }
        length--;
        k++;
    }
    printf("%s is palindrome",str);
    return 0;

}
