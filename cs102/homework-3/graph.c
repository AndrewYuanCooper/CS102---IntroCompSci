#include <stdio.h>
int main( int argc, char **argv )
{
int x = -100;
int y = 0;
int h = 4;
int yint = 0;
int yprime = 0;
int ysum = 0;

fprintf ( stdout, "x,y,yprime,ysum\n");
while( x <= 100 )
{
y = 6*x*x*x - 4*x*x + 8;
yprime = ((6*x*x*x - 4*x*x + 8) - (6*(x-h)*(x-h)*(x-h)- 4*(x-h)*(x-h) + 8))/h ;
yint = (((6*x*x*x - 4*x*x + 8) + (6*(x-h)*(x-h)*(x-h)- 4*(x-h)*(x-h) + 8))/2)*h;
ysum = ysum + yint;

fprintf( stdout, "%d;%d;%d;%d\n",x,y,yprime,ysum);
x = x + h;
}
return 0;
}
