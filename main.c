#include "printf.h"

int main()
{
	char *name = "abdellah";
	int age = 26;
	int x = 23;
	int u = 67;
	int *p = &u;


	int i = ft_printf("hello my name is [%s] and I am [%d] years old: Hex [%x], Unsigned [%u], addres [%p]\n", name, age, x, u, p);
	printf("%d\n", i);
	int b = printf("hello my name is [%s] and I am [%d] years old: Hex [%x], Unsigned [%u], addres [%p]\n", name, age, x, u, p);
	printf("%d\n", b);
}
