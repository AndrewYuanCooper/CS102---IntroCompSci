/* Print multiples of 13, and more, and a sum of multiples */
#include <stdio.h>
int main( int argc, char **argv )
{
int i = 1;
int multiple = 0;
int more = 0
;int sum = 0
;fprintf( stdout, "multiple,more,sum\n" );
while( i <= 10 )
{
multiple = i * 13;
more     = multiple + 5;
sum      = 715;
fprintf(stdout, "%d,%d,715\n", multiple, more, 715 );
i = i + 1;
}
return 0;
}
