#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include "lab6func.h"

void fill( int array[5][5]){

        int random;
               

        int i = 0;
	int j = 0;

        for( i = 0; i<5; i=i+1){


		for (j = 0; j<5; j = j+1)
			{
			 random = mrand48()%100;
               		 if (random < 0){
                       	 random = random * -1;
			}
		array[i][j] = random;
                }
        }

}

void print( int array[5][5]){
        int i = 0;
	int j = 0;

	for( i = 0; i<5; i=i+1){
		for( j = 0; j<5; j=j+1){

                fprintf(stdout,"%5d",array[i][j]);
		}
	fprintf(stdout,"\n");
	}
}

void add(int array[5][5], int array2[5][5], int array3[5][5]){

        int i = 0;
        int j = 0;

        for( i = 0; i<5; i=i+1){


                for (j = 0; j<5; j = j+1)
                {
                	array3[i][j] = array[i][j] + array2[i][j];
               	}
        }

}
