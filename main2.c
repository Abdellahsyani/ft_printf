#include "ft_printf.h"

int main(void)
{
	ft_printf("%d\n", INT_MIN);
	printf("%d\n", INT_MIN);
	int len1 = ft_printf("%s\n", NULL);
	int len2 = printf("%s\n", NULL);
	printf("%d\n", len1);
	printf("%d", len2);

    return (0);
}
