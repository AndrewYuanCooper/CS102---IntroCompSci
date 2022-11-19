#include <stdio.h>
#include "reverse.h"

int main( int argc, char** argv )
{
	if  (argc == 1)
	{
		fprintf( stdout,"no arguments found\n");
		return 0;
	}
	for (int i = argc-1; i>0; i --)
	{
		reverse_string(argv[i]);
		fprintf( stdout, "%s ", argv[i]);
	}
	fprintf(stdout, "\n");
return 0;
}


