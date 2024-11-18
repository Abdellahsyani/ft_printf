#include "printf.h"

int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = ft_printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    ft_printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    ft_printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    ft_printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    ft_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    ft_printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    ft_printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    ft_printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = ft_printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    ft_printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    return (0);
}
