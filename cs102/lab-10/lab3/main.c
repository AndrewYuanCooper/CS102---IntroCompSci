#include <stdio.h>
typedef struct { int wall; } room_t;

static room_t maze[10];

void clear_maze();
int  is_wall(int x);
void build_wall(int x);
void clear_wall( int x );


int main( int argc, char** argv )
{
  int i;
  int location_x = 2;
  clear_maze ();

  for( i=0; i<10; i++ )
  {
    maze[i].wall=0;
  }

  build_wall(3);

  for( i=0; i<10; i++ )
  {
    if( i== location_x )
    {
      fprintf( stdout, "x ");
    }

    else if( is_wall(i) == 1  )
    {
      fprintf( stdout, "##");
    }
    else
    {
      fprintf( stdout, ". ");
    }
  }
  fprintf (stdout, "\n");
  return 0;
}
void clear_maze()
{
  int i=0;
  for( i=0; i<10; i++ ) 
  {
    maze[i].wall= 0;
  }
}
int is_wall(int x)
{
  return maze[x].wall;
}

void build_wall(int x)
{
  maze[x].wall = 1;
}
void clear_wall(int x)
{
  maze[x].wall = 0;
}


