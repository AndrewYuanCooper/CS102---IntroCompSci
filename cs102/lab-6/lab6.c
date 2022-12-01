#include <stdio.h>
int string_length( char* string );
void reverse_string( char* string );
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

void reverse_string( char* string )
{
	int length = string_length(string);
	for (int i = 0; i<string_length(string)/2; i++)
	{
		char temp = string[i];
		string[i] = string[length - 1 - i];
		string[length - 1 - i] = temp;
	}
}
