#include <stdio.h>
int main( int argc, char **argv )
{
int i;
for ( i=0;i<10;i = i + 1)
fprintf (stdout, "Hello World!\n");

int x;
for (x=0; x<10; x = x + 1)
fprintf (stdout, "Goodbye World!\n");
return 0;
}
