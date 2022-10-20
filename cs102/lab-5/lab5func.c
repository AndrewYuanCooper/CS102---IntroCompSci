#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include "lab5func.h"

void fill( int array[5][5]){


        int random;
                srand48(getpid());

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

