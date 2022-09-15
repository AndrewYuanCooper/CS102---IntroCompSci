
#include <stdio.h>
int main( int argc, char **argv )
{
int x = 0;
int y = 0;
int more = 0;
int sum = 0;
fprintf ( stdout, "x,y\n" );
while( x <= 200 )
{
y = 1 + x*x;

fprintf( stdout, "%d;%d\n",x,y);
x = x + 1;
}
return 0;
}
