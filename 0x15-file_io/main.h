#ifndef MAIN_H
#define MAIN_H

#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

/* cp Function prototypes */
int _strlen(char *str);
void print_error(char *error_message, char *filename, int code);

/* display elf */
void display_elf_header(Elf64_Ehdr *header);
void error_exit(const char *msg, int status);

#endif
