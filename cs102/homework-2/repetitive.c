#include <stdio.h>
int main( int argc, char **argv )
{
int i;
fprintf (stdout, "Andrew Yuan 9/7/2022 102C2022Fall\n\n");

for ( i=0;i<25;i = i + 1)
fprintf (stdout, "Punch\nKick\n");

fprintf (stdout, "Take a deep breath\n");

int x;
for (x=0; x<25; x = x + 1)
fprintf (stdout, "Punch\nKick\n");
return 0;
}

