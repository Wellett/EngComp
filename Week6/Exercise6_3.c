/* Author:  William Ellett
StaffID:    133003

Exercise 6.3 From Programming, Problem Solving and Abstraction with C
*/
#include <stdio.h>

/*Prototypes*/
int dumb(int dumb);
int dumber(int dumber);


int main(int argc, char *argv[]){
  int num1;
  printf("Enter a number:");
  scanf("%d", &num);
  printf("The dumber number is %d", dumber(num));
  return 0;
}



int dumb(int dumb) {
  return dumb + 1;
}

int dumber(int dumber) {
  int dumber = 6;
  return dumb(dumber + 1);
}
