#include <stdio.h>
void function(int age[]){

    age[0] = 4;
    age[1] = 5;
    age[2] = 6;   
}

int main(){

    int age[] = {1,2,3};

    function(age);

    printf("%d %d %d",age[0],age[1],age[2]);

    return 0;
}