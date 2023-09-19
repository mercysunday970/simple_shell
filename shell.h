#ifndef SHELL_H
#define SHELL_H
/**
 * calling other header  files into this header
 */

#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <sys/wait.h>
/**
 * now my prototype files which will continually be updated
 */

void just_print(const char *venom);
void output_prompt(void);
void exec_code(const char *venom);
void get_my_input(char *venom, size_t size);

#endif /* SHELL_H*/
