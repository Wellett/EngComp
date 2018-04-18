/* Author:  William Ellett
StaffID:    133003

Exercise 7.3 From Programming, Problem Solving and Abstraction with C
*/


#include <stdio.h>

/*CONSTANTS*/
#define MAX_LEN 8

/*PROTOTYPES*/
void insertion_sort(int A[], int length);
void int_swap(int* p1, int* p2);
void print_array(int A[], int length);
int remove_rpts(int A[], int length);
void bump_down(int A[], int first, int last);


int main(int argc, char *argv[]){
  int length = MAX_LEN;
  int numbers[MAX_LEN] = {1, 5, 6, 6, 2, 16 , 5, 16};

  insertion_sort(numbers, length);
  length = remove_rpts(numbers, length);
  print_array(numbers, length);

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

int remove_rpts(int A[], int length){
  int i;
  for(i = 0; i < length; i++){
    if (A[i] == A[i+1]){
      bump_down(A, i+1, length);
      length--;
    }
  }
  return length;
}

void bump_down(int A[], int first, int last){
  int i;
  for (i = first; i < last; i++){
    A[i] = A[i + 1];
  }
}
