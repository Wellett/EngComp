/* Author:  William Ellett
StaffID:    133003

Exercise 7.6 From Programming, Problem Solving and Abstraction with C

In this example we have used a standard implementation of selection_sort,
selecting the smallest of the unsorted array, and placing it first

How can we modify this to work in the same was as prescribed in the textbook?
*/


#include <stdio.h>

/*CONSTANTS*/
#define MAX_LEN 8

/*PROTOTYPES*/
void selection_sort(int A[], int length);
void int_swap(int* p1, int* p2);
void print_array(int A[], int length);



int main(int argc, char *argv[]){
  int length = MAX_LEN;
  int numbers[MAX_LEN] = {1, 5, 6, 6, 2, 16 , 11, 16};

  selection_sort(numbers, length);
  print_array(numbers, length);

  return 0;
}


void selection_sort(int A[], int length){
  int i, j;
  /*Iterate unsorted array*/
  /* Why did I use length - 1 here*/
  for (i = 0; i < length - 1; i++){

    /*Index of the smallest element in the unsorted array*/
    int iMin = i;

    /* Find the smallest*/
    for (j = i + 1; j < length; j++){
      if (A[j] < A[iMin]){
        iMin = j;
      }
    }
    int_swap(A + i, A + iMin);
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
