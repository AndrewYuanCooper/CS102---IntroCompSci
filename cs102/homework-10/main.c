#include <stdio.h>
#include "maze.h"
#include "file.h"

int main( int argc, char** argv )
{
	clear_maze();
        int i;
	int j;
	set_location_x(0)
	set_location_y(0)
     
        print_walls();
        fprintf(stdout,"\n");
        fprintf(stdout,"type either r or l and hit enter to move right or left\n");
        fprintf(stdout,"hit CTRL-D or CTRL-C to exit\n");
        fprintf(stdout,"\n");

	char scratchpad[1024];
        char name[1000];
	
 	while( fgets( scratchpad, 1024, stdin ) != NULL )
        {
          if( sscanf(scratchpad, "load%s", name))
	 	{
			clear_maze();
			load(name);
	 	}
		else if (sscanf(scratchpad, "save %s", name))
		{
			save( name);
		}
		else if(scratchpad[0]=='r' )
                {
                        move_right();
                }
                else if(scratchpad[0]=='l' )
                {
                        move_left();
                }
		else if(scratchpad[0]=='d' )
               	{
                	move_down();
                }
                else if(scratchpad[0]=='u' )
                {
                        move_up();
                }
                else if( sscanf(scratchpad, "wall %d", &i, &j ) ==1)
                {
                        build_wall(i,j );
                }
                else if( sscanf(scratchpad, "empty %d", &i, &j) ==1)
                {
                        clear_wall( i, j );
                }
		else if( sscanf(scratchpad, "x %d", &i, &j) ==1)
                {
                        set_location_x(i );
                }
		{
			set_location_y(j );
		}
                print_walls();
		fprintf(stdout, "\n");       
	 }
return 0;
}
