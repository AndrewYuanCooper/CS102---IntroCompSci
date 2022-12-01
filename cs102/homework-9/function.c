#include "function.h"
#include <stdio.h>

int print_file(char *filename) {
	FILE *file;
	char scratch[1024];
	file = fopen(filename, "r");
	if (file != NULL) {
    		int num_lines = 0;
    		int num_bytes = 0;
    		int num_words = 0;
    		while (fgets(scratch, 1024, file) != NULL) {
      			num_lines++;
      			num_bytes += string_length(scratch);
      			num_words += word_count(scratch);
    		}
    		fprintf(stdout, "%s %d lines %d words %d bytes\n", filename, num_lines, num_words, num_bytes);
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

int word_count(char *string) {
	int i = 0;
	int words = 0;
	while (string[i] != '\0') {
		if ((string[i]!=' ' && string[i]!='\n' && string[i]!='\0') && (string[i++]==' ' || string[i++]=='\n' || string[i]=='\0'))
			words++;
	}
    	i++;
  	return words;
}


