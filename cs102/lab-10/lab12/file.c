#include <stdio.h>
#include "maze.h"
#include "file.h"

void load( char* filename )
{
  FILE* straw;
  int i;
  char scratchpad[1024];
  straw=fopen(filename, "r");
  if( straw != NULL)
  {
    while( fgets( scratchpad, 1024, straw) !=NULL)
    {
      if( sscanf( scratchpad,"WALL %d", &i)== 1)
        {
        build_wall(i);
        }
      else if (sscanf( scratchpad, "X %d", &i)== 1)
        {
        set_location_x(i);
        }
    }
    fclose(straw);
  }
}


void save(char* filename)
{
  FILE* out;
  int i;
  out=fopen(filename, "w");
  if ( out != NULL)
  {
    for (i=0; i<10; i++)
    {
     if(is_wall(i)== 1)
     {
       fprintf( out, "WALL%d\n", i); 
     }
    }
   fprintf( out, "X %d",get_location_x());  	
   fclose( out);
  }
}
