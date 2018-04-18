/* Author:  William Ellett
StaffID:    133003

Exercise 7.2 From Programming, Problem Solving and Abstraction with C
*/


#include <stdio.h>

/*CONSTANTS*/
#define MAX_LEN 8

/*PROTOTYPES*/
void insertion_sort(int A[], int length);
void int_swap(int* p1, int* p2);
void print_array(int A[], int length);


int main(int argc, char *argv[]){
  int numbers[MAX_LEN] = {1, 5, 87, 6, 0, 56, 5, 56};
  insertion_sort(numbers, MAX_LEN);
  print_array(numbers, MAX_LEN);
  return 0;
}


void insertion_sort(int A[], int length){
  int i, j;
  for (i = 1; i < length; i++){
    /*swap A[i] left into correct position*/
    for (j = i-1; j>=0 && A[j+1]<A[j]; j--){
      int_swap(&A[j], &A[j+1]);
    }
  }
}

void int_swap(int* p1, int* p2){
  int temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}

void print_array(int A[], int length){
  int i;
  for (i = 0; i < length; i++){
    printf("%d, ", A[i]);
  }
  printf("\n");
}
