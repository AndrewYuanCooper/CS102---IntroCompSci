#include <stdio.h>
int main( int argc, char **argv )
{

int a[10];

int i = 0;
for( i = 0; i<10; i=i+1)

{
a[i] = 5;
}

for( i = 0; i<10; i=i+1)

{
fprintf(stdout,"%d\n",a[i]);
}

return 0;

}
