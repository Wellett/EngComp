/* Author:  William Ellett
StaffID:    133003

Exercise 5.2 From Programming, Problem Solving and Abstraction with C
*/
#include <stdio.h>

/*Prototypes*/
int max_2_ints(int num1, int num2);
int max_4_ints(int int1, int int2, int int3, int int4);
int max_4_ints2(int int1, int int2, int int3, int int4);


int main(int argc, char *argv[]){
  int num1, num2, num3, num4;
  printf("Enter four numbers:");
  scanf("%d%d%d%d", &num1, &num2, &num3, &num4);
  printf("The largest number is %d", max_4_ints2(num1, num2, num3, num4));
  return 0;
}


/*Is there a better way to do this?
Yes! Of course there is!*/
int max_4_ints(int int1, int int2, int int3, int int4){
  if (int1 >= int2 && int1 >= int3 && int1 >= int4){
    return int1;
  }
  else if (int2 >= int3 && int2 >= int4){
    return int2;
  }
  else if (int3 >= int4){
    return int3;
  }
  else {
    return int4;
  }
}

/*What if we use max_2_ints?*/
int max_2_ints(int int1, int int2){
  if (int1 >= int2){
    return int1;
  }
  else{
    return int2;
  }
}

/*Put the alternative here*/
int max_4_ints2(int int1, int int2, int int3, int int4){
  return max_2_ints(max_2_ints(int1, int2), max_2_ints(int3, int4));
}
