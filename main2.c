#include "ft_printf.h"

int main(void)
{
	int len1 = ft_printf("%t\n");
	int len2 = printf("%t\n");
	printf("%d\n", len1);
	printf("%d", len2);

    return (0);
}
