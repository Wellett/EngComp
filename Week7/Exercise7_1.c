/* Author:  William Ellett
StaffID:    133003

Exercise 7.1 From Programming, Problem Solving and Abstraction with C
*/


/*There are 5 Errors in this program, see if you can find them*/

#include <stdio.h>

/*CONSTANTS*/
#define MAX_LEN 6

int main(int argc, char *argv[]){
  int numbers[MAX_LEN] = {1, 5, 87, 6, 0};
  if(all_zero(numbers[], MAX_LEN)){
    printf("Not all numbers are zero");
  }
  else{
    printf("All numbers are zero");
  }
  return 0;
}


int all_zero(int A[], int n){
  int i;
  for(i = 0; i <= n; i++){
    if(A[i]){
      return 0;
    }
  }
  return 1;
}
