#include "function.h"
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
/*
 * Andrew Yuan
* CS102 Fall 2022
* Homework 5
* 10-05-2022
*/

void fill8x12( int array[8][12] ) {

  int random;
  for(int i = 0; i < 8; i=i+1) {

    for(int j = 0; j < 12; j=j+1) {

		random = mrand48()%100;
		if (random < 0){
			random = random - random - random;
		}
		array[i][j] = random;  
    }
  }
}

void fill12x8( int array[12][8] ) {
  int random;
  for(int i = 0; i < 12; i=i+1) {

    for(int j = 0; j < 8; j=j+1) {

		random = mrand48()%100;
		if (random < 0){
			random = random - random - random;
		}
		array[i][j] = random; 
    }
  }
}


void print8x12(int array[8][12] ) {

  for(int i = 0; i < 8; i=i+1) {

    for(int j = 0; j < 12; j=j+1) {

      fprintf(stdout,"%5d", array[i][j]); 
    }
	fprintf(stdout,"\n");
  }
}



void print12x8(int array[12][8] ) {

  for(int i = 0; i < 12; i=i+1) {

    for(int j = 0; j < 8; j=j+1) {

      fprintf(stdout,"%5d", array[i][j]); 
    }
	fprintf(stdout,"\n");
  }
}



void print12x12(int array[12][12] ) {

  for(int i = 0; i < 12; i=i+1) {

    for(int j = 0; j < 12; j=j+1) {

      fprintf(stdout,"%10d", array[i][j]); 
    }
	fprintf(stdout,"\n");
  }
}

void cross(int array[8][12], int array2[12][8], int array3[12][12] ) {

  for(int i = 0; i < 12; i=i+1) {

    for(int j = 0; j < 12; j=j+1) {

      array3[i][j] = 0; 
    }
  }

  for(int i = 0; i < 12; i=i+1) {

    for(int j = 0; j < 12; j=j+1) {

      for(int k = 0; k < 8; k=k+1) {
        
        array3[i][j] = array3[i][j] + array2[j][k] * array[k][i]; 
      }
    }
  }
}
