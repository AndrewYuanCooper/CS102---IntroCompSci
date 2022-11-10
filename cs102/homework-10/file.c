#include <stdio.h>
#include "maze.h"
#include "file.h"

void load( char* filename )
{
  FILE* straw;
  int i;
  int j;
  char scratchpad[1024];
  straw=fopen(filename, "r");
  if( straw != NULL)
  {
    while( fgets( scratchpad, 1024, straw) !=NULL)
    {
      if( sscanf( scratchpad,"WALL %d  %d", &i,&j)== 2)
        {
        build_wall(i, j);
        }
      else if (sscanf( scratchpad, "X %d", &i)== 1)
        {
        set_location_x(i);
        }
      else if (sscanf( scratchpad, "Y %d", &j) ==1)
	{
	set_location_y( j);
	}
    }
    fclose(straw);
  }
}


void save(char* filename)
{
  FILE* out;
  int i;
  int j;
  out=fopen(filename, "w");
  if ( out != NULL)
  {
    for (i=0; i<10; i++)
    for (j=0; j<10; j++)
    {
     if(is_wall(i, j)== 1)
     {
       fprintf( out, "WALL%d %d\n", i,j); 
     }
    }
   fprintf( out, "X %d",get_location_x(),get_location_y());  	
   fclose( out);
  }
}
