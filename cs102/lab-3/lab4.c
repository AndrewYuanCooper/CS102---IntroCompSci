#include <stdio.h>
int main( int argc, char **argv )
{
int x = 0;
int y = 0;
int h = 2;
int yint = 0;
int yprime = 0;
int ysum = 0;

fprintf ( stdout, "x,y,yprime\n" );
while( x <= 200 )
{
y = 1 + x*x;
yprime = ((1+x*x)-(1+(x-h)*(x-h)))/h;
yint = (((1+x*x)+(1+(x-h)*(x-h)))/2)*h;
ysum = ysum + yint; 

fprintf( stdout, "%d;%d;%d;%d;%d\n",x,y,yprime,yint,ysum);
x = x + h;
}
return 0;
}
