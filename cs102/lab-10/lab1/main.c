#include <stdio.h>
typedef struct { int wall; } room_t;
int main( int argc, char** argv ) 
{
  /* make a bunch of rooms */
  room_t maze[10];
  int i;

  /* fill each wall with 0 */
  for( i=0; i<10; i++ ) 
  {
    maze[i].wall=0;
  }

  /* set room 3 with wall */
  maze[3].wall = 1;

  /* print out all the rooms */
  for( i=0; i<10; i++ ) 
  {
    if( maze[i].wall == 1 )
    {
      fprintf( stdout, "##");
    }
    else
    {
      fprintf( stdout, ". ");
    }
  }
  return 0;
}
