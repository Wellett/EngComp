/* Author:  William Ellett
StaffID:    133003

Exercise 5.3 From Programming, Problem Solving and Abstraction with C
*/
#include <stdio.h>

#define BASE_CASE 1;

/*Prototypes*/
int int_pow(int base, int pow);

int
main(int argc, char *argv[]){
  int base, power;
  printf("Enter two numbers, a base and a positive power:");
  scanf("%d%d", &base, &power);
  printf("%d raised to %d is equal to %d", base, power, int_pow(base, power));
  return 0;
}

int int_pow(int base, int pow){
  int i;
  int result = BASE_CASE;
  for(i = 1; i <=pow; i++){
    result*=base;
  }
  return result;
}
