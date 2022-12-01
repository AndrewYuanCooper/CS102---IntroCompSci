#include <stdio.h>
int my_function(char* input);
int main(int argc, char *argv) {
  for (int i = 1; i < argc; i++) {
    my_function(argv[i]);
  }

}

int my_function(char input) {
  printf("my_function(%s)\n", input);
  return 0;
}
