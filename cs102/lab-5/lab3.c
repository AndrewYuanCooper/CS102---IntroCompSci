#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void fill( int array[10]);
void print( int array[10]);

int main( int argc, char **argv ){
	int array[10]={0,0,0,0,0,0,0,0,0};
	srand48(getpid());
	fill(array);
	print(array);
return 0;

}

void fill( int array[10]){


	int random;
		srand48(getpid());

	int i = 0;

	for( i = 0; i<10; i=i+1)

	{
		random = mrand48()%100;
		if (random < 0){
			random = random * -1;
		}
	array[i] = random;
	}


}

void print( int array[10]){
	int i = 0;
	for( i = 0; i<10; i=i+1){

		fprintf(stdout,"%d\n",array[i]);
	}
}
