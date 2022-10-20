#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main( int argc, char **argv )
{

int a[10];

int random;
srand48(getpid());

int i = 0;

for( i = 0; i<10; i=i+1)

{
random = mrand48()%100;
if (random < 0){
random = random * -1;
}

a[i] = random;

}

for( i = 0; i<10; i=i+1)

{
fprintf(stdout,"%d\n",a[i]);
}

return 0;

}
