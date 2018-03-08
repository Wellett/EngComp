/* Author:  William Ellett
StaffID:    133003

Exercise 3.2 From Programming, Problem Solving and Abstraction with C
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* FUNCTION PROTOTYPES */
void exA();
void exB();
void exC();
void exD();
void exE();
void exF();

int
main(int argc, char *argv[]){
  if(argc == 1){
    printf("No example selected\n");
    printf("Please select example a, b, c, d, e, or f");
  }
  else if (strcmp(argv[1], "a") == 0){
    exA();
  }
  else if (strcmp(argv[1], "b") == 0){
    exB();
  }
  else if (strcmp(argv[1], "c") == 0){
    exC();
  }
  else if (strcmp(argv[1], "d") == 0){
    exD();
  }
  else if (strcmp(argv[1], "e") == 0){
    exE();
  }
  else if (strcmp(argv[1], "f") == 0){
    exF();
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
  int days;
  int month = 7;
  if (month == 2) {
    days = 28;
  }
  else if (month == 4 || 6 ||9||11){
    days = 30;
  }
  else {
    days = 31;
  }
  printf("days=%d,\n", days);
}

void exD(){
  int x = 1,  y = 2;
  if (x > y)
    printf("x = %d, y = %d\n", x, y);
    x = x + 1;
  if (x < y)
    printf("x = %d, y = %d\n", x, y);
    y = y + 2;
    printf("x = %d, y = %d\n", x, y);
}

void exE(){
  int x = 1, y = 2;
  if (x>y); {
    printf("x = %d, y = %d\n", x, y);
    x = x + 1;
  }
  if (x<y); {
    printf("x = %d, y = %d\n", x, y);
    y = y + 2;
  }
}

void exF(){
  int x = 0, y = 1;
  if (y < x){
    printf("y is smaller\n");
  } else if (y = x) {
    printf("x and y are equal\n");
  } else {
    printf("y is greater\n");
  }

}
