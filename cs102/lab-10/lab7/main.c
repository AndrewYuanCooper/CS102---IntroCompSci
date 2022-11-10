#include <stdio.h>
#include "maze.h"
int main( int argc, char** argv )
{
	set_location_x( 2 );
	clear_maze();	
	build_wall(3);
	
	print_walls();
	fprintf(stdout,"\n");
	fprintf(stdout,"type either r or l and hit enter to move right or left respectively\n");
	fprintf(stdout,"hit CTRL-D or CTRL-C to exit\n");
	fprintf(stdout,"\n");

char scratchpad[1024];
	while( fgets( scratchpad, 1024, stdin ) != NULL )
	{
		if(scratchpad[0]=='r' ) 
		{
			move_right();
		}
		else if(scratchpad[0]=='l' )
		{
			move_left();
		}
	
		print_walls();
		fprintf(stdout,"\n");
	}
return 0;
}
