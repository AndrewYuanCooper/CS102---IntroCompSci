#include <stdio.h>
int print_file(char* filename);
int main(int argc, char *argv) {
  for (int i = 1; i < argc; i++) {
    print_file(argv[i]);
  }

  }

int print_file(char filename) {
  FILE* file;
  char scratch[1024];
  file = fopen( filename, "r" );
  if( file != NULL )
  {
  if( fgets( scratch, 1024, file ) != NULL )
  {
  fprintf( stdout, "print_file(foo.txt)\n%s\n", scratch );
  }
  fclose( file );
  }
return 0;
}

