#include <stdio.h>
#include "maze.h"
int main( int argc, char** argv )
{
	int i;
	int location_x=2;

	clear_maze();
	build_wall(3);
	clear_wall(0);

	for( i=0; i<10; i++ )
	{
		if( is_wall(i) )
		{
		fprintf( stdout, "%s", "##" );
		}
		else if( i == location_x )
		{
		fprintf( stdout, "%s", "x" );
		}
		else
		{
		fprintf( stdout, "%s", "." );
		}
	}
 	return 0;
}
