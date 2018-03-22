/* Author:  William Ellett
StaffID:    133003

Exercise 5.3 From Programming, Problem Solving and Abstraction with C
*/
#include <stdio.h>
#include <limits.h>

#define FIRST_PERFECT 6
/*Prototypes*/
int isperfect(int num);

int
main(int argc, char *argv[]){
  int num;
  for(num = FIRST_PERFECT; num < INT_MAX; num++){
    if(isperfect(num)){
      printf("%d is a perfect number\n", num);
    }
  }
  return 0;
}


int isperfect(int num){
  int divisor, sum = 1;
  for (divisor = 2; divisor*divisor <= num; divisor++){
    /*Find factors and add them to the sum*/
    if (num%divisor == 0){
      sum += divisor;
      sum += num/divisor;
    }
    if (sum > num){
      return 0;
    }
  }
  if (sum == num){
    return 1;
  }
  else {
    return 0;
  }
}
