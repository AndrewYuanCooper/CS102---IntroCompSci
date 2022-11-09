#include <stdio.h>
#include "maze.h"
int main( int argc, char** argv )
{
	set_location_x( 2 );
	clear_maze();	
	build_wall(3);
	clear_wall(0);
	fprintf(stdout, "initial location\n");
	print_walls();
	fprintf(stdout, "\n");
	fprintf(stdout,"after trying to move you to the next space\n");
	move_right();
	print_walls();
	fprintf(stdout,"\n");

	fprintf(stdout,"after trying to move you to the previous space\n");
	move_left();
	print_walls();
	fprintf(stdout,"\n");

	fprintf(stdout,"after trying to move you to the previous space\n");
	move_left();
	print_walls();
	fprintf(stdout,"\n");

	fprintf(stdout,"after trying to move you to the previous space\n");
	move_left();
	print_walls();
	fprintf(stdout,"\n");
 	return 0;
}
