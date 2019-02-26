#include <stdio.h>
#include <stdlib.h>

#ifdef NOEDITLINE

char* readline(const char *prompt) {
  char* input = malloc(1000);
  printf("%s", prompt);
  return fgets(input, 1000, stdin);
}

int read_history(const char *filename) {
  (void)filename;
  return 1;
}

int add_history(const char *input) {
  (void)input;
  return 1;
}

int write_history(const char *filename) {
  (void)filename;
  return 1;
}

#else

#include <editline/readline.h>

#endif
