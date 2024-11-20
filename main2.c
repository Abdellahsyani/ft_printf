#include "ft_printf.h"

int main(void)
{
	ft_printf("%d\n", INT_MAX);
	ft_printf("%d\n", INT_MIN);
	int len1 = ft_printf("%p\n", -1);
	int len2 = printf("%p\n", -1);
	ft_printf("%d\n", -47247);
	printf("%d\n", len1);
	printf("%d", len2);

    return (0);
}
