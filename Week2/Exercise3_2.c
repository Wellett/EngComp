/* Author:  William Ellett
StaffID:    133003

Exercise 3.2 From Programming, Problem Solving and Abstraction with C
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void exA();

int
main(int argc, char *argv[]){
  if(argc == 1){
    printf("No example selected\n");
    printf("Please select example a, b, c, d, e, or f");
  }
  else if (strcmp(argv[1], "a") == 0){
      exA();
  }
  else{
    printf("Invalid argument\nProgram terminating");
    exit(EXIT_FAILURE);
  }
  return 0;
}

void exA(){
  int i, j;
  i = 3; j = 4;
  if (i<j && j<6){
    i = i +j;
  }
  else {
    j = i + j;
  }
  printf("i=%d, j=%d\n", i, j);
}

void exB(){
  int i=3, j=4 ,k=7;
  if ((i<j || j<k) && j<i) {
    i = i+1;
    if (i*i>k){
      k = k + 1;
    }
  }
  else {
    j = j+1;
    if (i*i>k) {
      k = k + 2;
    }
  }
  printf("i = %d, j = %d, k = %d\n", i, j, k);
}

void exC(){
  int month = 7;
  if (month == 2) {
    days = 28;
  }
  
}
