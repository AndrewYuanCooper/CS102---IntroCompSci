#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include "lab5func.h"

int main( int argc, char **argv ){
	int array[5][5];
	int array2[5][5];
	srand48(getpid());
	fill(array);
	print(array);
	fill(array2);
	print(array2);
	return 0;
}


