#include <stdio.h>
void display(int age1, int age2) {
  printf("%d\n", age1);
  printf("%d\n", age2);
}

int main() {
  int age[] = {2, 8, 4, 12};

  // pass second and third elements to display()
  display(age[1], age[2]); 
  return 0;
}
