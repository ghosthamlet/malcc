#ifndef __MAL_READLINE__
#define __MAL_READLINE__

char* readline(const char *prompt);
int read_history(const char *filename);
int add_history(const char *input);
int write_history(const char *filename);

#endif
