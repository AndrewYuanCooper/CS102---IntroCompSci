#include <stdio.h>
int print_file(char* filename);
int string_length(char* string );
int main(int argc, char *argv) {
  for (int i = 1; i < argc; i++) {
    print_file(argv[i]);
  }
}

int print_file(char *filename) {
  FILE *file;
  char scratch[1024];
  file = fopen(filename, "r");
  if (file != NULL) {
    printf("print_file(foo.txt)\n");
    int num_lines = 0;
    int num_bytes = 0;
    while (fgets(scratch, 1024, file) != NULL) {
      num_lines++;
      num_bytes += string_length(scratch);
    }
    fprintf(stdout, "foo.txt %d lines %d bytes\n", num_lines, num_bytes);
    fclose(file);
  }
  return 0;
}

int string_length(char *string) {
  int count = 0;
  while (string[count] != '\0') {
    count++;
  }
  return count;
}
