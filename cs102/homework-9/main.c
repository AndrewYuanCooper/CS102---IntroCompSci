#include <stdio.h>
#include "function.h"

int main(int argc, char **argv) {
	for (int i = 1; i < argc; i++) {
		print_file(argv[i]);
  	}
}
