#include <stdio.h>
int string_length( char* string );
int main( int argc, char** argv )
{
	if  (argc == 1)
	{
		fprintf( stdout,"no arguments found\n");
		return 0;
	}
	for (int i = 1; i<argc; i ++)
	{
		fprintf( stdout, "%s %d ", argv[i], string_length(argv[i]));
	}
	fprintf(stdout, "\n");
return 0;
}
int string_length(char* string)
{
int count = 0;
while (string[count] != '\0')
{
	count ++;
}
return count;
}
