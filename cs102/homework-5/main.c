#include "function.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

/*
 * Andrew Yuan
* CS102 Fall 2022
* Homework 5
* 10-05-2022
*/

int main(int argc, char **argv) {
  int array[8][12];
  int array2[12][8];
  int array3[12][12];
  srand48(getpid());
  fill8x12(array);
  fill12x8(array2);
  cross(array, array2, array3);

  print8x12(array);
  printf("\n");
  print12x8(array2);
  printf("\n");
  print12x12(array3);
  printf("\n");
  return 0;
}
