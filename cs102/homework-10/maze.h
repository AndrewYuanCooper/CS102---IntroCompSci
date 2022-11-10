typedef struct{int wall;int treasure;} room_t;
void clear_maze();
int is_wall( int x, int y );
void build_wall( int x, int y );
void clear_wall( int x, int y );
void print_walls();
int get_location_x();
void set_location_x(int x);
void move_right();
void move_left();
int get_location_y();
void set_location_y();
void move_down();
void move_up();
