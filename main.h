#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int _puts(const char *s);
int _printf(const char *format, ...);
int check_print_d(int n);
int check_num_specf(va_list args, const char *format);

#endif /* MAIN_H */
