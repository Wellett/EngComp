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
void exG();

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
  else if (strcmp(argv[1], "g") == 0){
    exG();
  }
  else{
    printf("Invalid argument\nProgram terminating");
    exit(EXIT_FAILURE);
  }
  return 0;
}

void exA(){
  int i;
  for (i = 0; i<20; i = i+3){
    printf("%d\n", i);
  }
}

void exB(){
  int i;
  for (i =1; i < 2000000; i = 2*i) {
    printf("%7d\n", i);
  }
}

void exC(){
  int i;
  int sum = 0;
  for (i = 1; i < 10; i++){
    sum = sum + i;
    printf("S(%2d) = %2d\n", i, sum);
  }
}

void exD(){
  int i, j;
  for (i = 0; i < 8; i++){
    for (j = i + 1; j < 8; j +=3){
      printf("i = %d, j = %d\n", i , j);
    }
  }

}

void exE(){
  int i, j;
  for (i = 0; i < 8; i++){
    for (j = i + 1; j < 8; j +=3){
      if (i + j == 7){
        break;
      }
      printf("i = %d, j = %d\n", i , j);
    }
  }
}

void exF(){
  int i, j = 5;
  for (i = 0; i < j; i++); {
    printf("i = %d, j = %d\n", i, j);
  }
}

void exG(){
  int i, j = 5;
  for (i = 0; i < j; j++){
    printf("i = %d, j = %d\n", i , j);
  }
}
