#include <stdio.h>
#include "maze.h"
static room_t maze[10];
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
