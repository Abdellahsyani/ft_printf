#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stdint.h>

int	ft_printf(const char *format, ...);
int	ft_putnbr(int n);
int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_hexa(int n);
int	ft_Hexa(int n);
int	ft_unsigned(int n);
int	ft_addr(void *v);

#endif
