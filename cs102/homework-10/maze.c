#include <stdio.h>
#include "maze.h"

static room_t maze[10][10];
static int location_x;
static int location_y;

int get_location_x()
{
	return  location_x;
}
void set_location_x( int s )
{
	location_x=s;
}

int get_location_y()
{
        return  location_y;
}
void set_location_y( int s )
{
        location_y=s;
}

void print_walls()
{
	int i;
	int j;
	for( i=0; i<10; i++ )
	{
		for( j=0; j<10; j++ )
		{
                	if( i == location_x && j == location_y)
                	{
                		fprintf( stdout, "x " );
                	}
                	else if( is_wall(i, j) )
                	{
                		fprintf( stdout, "##" );
                	}
                	else if( is_treasure(i, j) )
			{
				fprintf( stdout, "T " );
			}
			else
                	{
                		fprintf( stdout, ". " );
                	}
			if (is_treasure(location_x, location_y) == 1) 
			{
        			fprintf(stdout, "You win!\n");
        			return;
      			}
		}
	fprintf(stdout, "\n");
	}
}

void clear_maze()
{
for(int i=0; i<10; i++ )
for(int j=0; j<10; j++ )
	clear_wall(i, j);
}

int is_wall( int x, int y )
{
	return maze[x][y].wall;
}

void build_wall( int y, int x)
{
	maze[x][y].wall = 1;
}

void clear_wall( int x, int y)
{
	maze[x][y].wall = 0;
}
void move_right()
{
	if( (location_x+1) < 10 )
	{
		if(is_wall( location_x, location_y+1 ) != 1 )
		{
			location_y = location_y + 1;
		}
	}
}
void move_left()
{
        if( (location_x-1)>=0 )
        {
                if( is_wall( location_x, location_y-1 ) != 1 )
                {
                        location_y = location_y - 1;
  		}
        }
}

void move_up()
{
        if( (location_y-1)>=0 )
        {
                if( is_wall( location_x-1 ,location_y ) != 1 )
                {
                        location_x = location_x - 1;
                }
        }
}
void move_down()
{
        if( (location_y+1)>=0 )
        {
                if( is_wall( location_x+1 ,location_y ) != 1 )
                {
                        location_x = location_x + 1;
                }
        }
}

int is_treasure (int x, int y)
{
        return maze[x][y].treasure;
}

void set_treasure( int x, int y)
{
    maze[x][y].treasure = 1;
}
