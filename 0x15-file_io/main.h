#ifndef HEADER_FILE_H
#define HEADER_FILE_H
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/stat.h>

#define ARR_SIZE 1024

int _putchar(char c);
ssize_t read_textfile(const char *filename, size_t letters);
int _strlen(char *str);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);


#endif
