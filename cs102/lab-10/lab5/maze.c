#include <stdio.h>
#include "maze.h"
static room_t maze[10];
static int location_x;

int get_location_x()
{
	return  location_x;
}
void set_location_x( int s )
{
location_x=s;
}
void print_walls()
{
	int i;
	for( i=0; i<10; i++ )
	{
                if( i == location_x )
                {
                	fprintf( stdout, "%s", "x" );
                }
                else if( is_wall(i) )
                {
                	fprintf( stdout, "%s", "##" );
                }
                else
                {
                	fprintf( stdout, "%s", "." );
                }
	}
}

void clear_maze()
{
for(int i=0; i<10; i++ )
clear_wall(i);
}

int is_wall( int x )
{
return maze[x].wall;
}

void build_wall( int x )
{
maze[x].wall = 1;
}

void clear_wall( int x )
{
maze[x].wall=0;
}
