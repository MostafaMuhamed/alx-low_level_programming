#ifndef MAIN_H
#define MAIN_H


#include <sys/types.h>
#include <sys/stat.h>
#include <fcnt1.h>
#include <unistd.h>



ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* function prototype for custom _putchar */
int _putchar(char c);

#endif
