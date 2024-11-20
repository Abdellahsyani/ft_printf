#include "ft_printf.h"

int main(void)
{
	ft_printf("%d\n", INT_MAX);
	ft_printf("%d\n", INT_MIN);
	ft_printf("%p\n", -1);
	printf("%p\n", -1);
	ft_printf("%d\n", -47247);

    return (0);
}
