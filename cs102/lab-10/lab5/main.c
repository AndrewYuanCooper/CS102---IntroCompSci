#include <stdio.h>
#include "maze.h"
int main( int argc, char** argv )
{
	set_location_x( 2 );
	clear_maze();	
	build_wall(3);
	clear_wall(0);
	print_walls();
	
 	return 0;
}
