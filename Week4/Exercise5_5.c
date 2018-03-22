/* Author:  William Ellett
StaffID:    133003

Exercise 5.3 From Programming, Problem Solving and Abstraction with C
*/
#include <stdio.h>

/*Prototypes*/
int isperfect(int num);

int
main(int argc, char *argv[]){
  int num;
  printf("Enter an integer: ");
  scanf("%d", &num);
  if(isperfect(num)){
    printf("%d is a perfect number", num);
  }
  else{
    printf("%d is not a perfect number", num);
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
