#include "ft_printf.h"
#include <assert.h>

int main()
{
	unsigned int l = 42;

	printf("----------------------\n");
	printf("---> UNSIGNED INT <---\n");
	printf("----------------------\n");
	// test case of unsigned int 
	ft_printf("%u\n", 1024);
	printf("%u\n", 1024);
	ft_printf("%u\n", (unsigned int)-1024);
	printf("%u\n", (unsigned int)-1024);
	ft_printf("%u\n", 0);
	printf("%u\n", 0);
	ft_printf("%u\n", UINT_MAX);
	printf("%u\n", UINT_MAX);
	ft_printf("%u\n", l);
	printf("%u\n", l);
	ft_printf("There are %u bytes in %u KB\n", 1024, 1);
	printf("There are %u bytes in %u KB\n", 1024, 1);
	ft_printf("%u - %u = %u\n", 2048, 1024, 1024);
	printf("%u - %u = %u\n", 2048, 1024, 1024);

	//test cases of string
	int len_1 = 0, len_2 = 0;
	printf("----------------------\n");
	printf("---> STRING CASES <---\n");
	printf("----------------------\n");
	len_1 = printf("Expected output:    %s\n", "Morocco");
	len_2 = ft_printf("Current output:     %s\n", "Morocco");
	printf("Expected length:    [%d]\n", len_1);
	ft_printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %s$\n", "");
	len_2 = ft_printf("Current output:     %s$\n", "");
	printf("Expected length:    [%d]\n", len_1);
	ft_printf("Current length:     [%d]\n", len_2);
	printf("Expected length:    [%d]\n", len_1);
	ft_printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %s\n", "hello, world");
	len_2 = ft_printf("Current output:     %s\n", "hello, world");
	printf("Expected length:    [%d]\n", len_1);
	ft_printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %sForLife\n", "Morocco");
	len_2 = ft_printf("Current output:     %sForLife\n", "Morocco");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	ft_printf("\n");
	printf("\n");
	ft_printf("Got: %%%c\n", 'X');
	printf("Excepted: %%%c\n", 'X');
	ft_printf("Got: space :%	  s\n", "hello");
	ft_printf("Excepted: space :%	  s\n", "hello");
	// test case integer
	//int len_1, len_2;

	/* ===========> %d <=========== */
	printf("----------------------\n");
	printf("--> INT(%%d) CASES <---\n");
	printf("----------------------\n");
	len_1 = printf("%d\n", 0);
	len_2 = ft_printf("%d\n", 0);
	assert(len_1 == len_2);

	len_2 = printf("%d\n", INT_MIN);
	len_1 = ft_printf("%d\n", INT_MIN);
	assert(len_1 == len_2);

	len_1 = printf("%d\n", INT_MAX);
	len_2 = ft_printf("%d\n", INT_MAX);
	assert(len_1 == len_2);

	/* ===========> %i <=========== */
	printf("----------------------\n");
	printf("--> INT(%%i) CASES <---\n");
	printf("----------------------\n");
	len_1 = printf("%i\n", 0);
	len_2 = ft_printf("%i\n", 0);
	assert(len_1 == len_2);

	len_2 = printf("%i\n", INT_MIN);
	len_1 = ft_printf("%i\n", INT_MIN);
	assert(len_1 == len_2);

	len_1 = printf("%i\n", INT_MAX);
	len_2 = ft_printf("%i\n", INT_MAX);
	assert(len_1 == len_2);
	printf("----------------------\n");
	printf("-----> hex CASES <----\n");
	printf("----------------------\n");
	len_1 = printf("%x\n", 0);
	len_2 = ft_printf("%x\n", 0);
	assert(len_1 == len_2);

	len_2 = printf("%x\n", 255);
	len_1 = ft_printf("%x\n", 255);
	assert(len_1 == len_2);

	len_1 = printf("%x\n", UINT_MAX);
	len_2 = ft_printf("%x\n", UINT_MAX);
	assert(len_1 == len_2);

	/* ===========> %X <=========== */
	printf("----------------------\n");
	printf("-----> HEX CASES <----\n");
	printf("----------------------\n");
	len_1 = printf("%X\n", 0);
	len_2 = ft_printf("%X\n", 0);
	assert(len_1 == len_2);

	len_2 = printf("%X\n", 255);
	len_1 = ft_printf("%X\n", 255);
	assert(len_1 == len_2);

	len_1 = printf("%X\n", UINT_MAX);
	len_2 = ft_printf("%X\n", UINT_MAX);
	assert(len_1 == len_2);
	//test address
	printf("----------------------\n");
	printf("-----> address CASES <----\n");
	printf("----------------------\n");
	int len;
	int len2;

	// Test case 1
	void *p1 = (void *)0x7fff5100b608;
	len = ft_printf("%p", p1);
	printf("\n\n");
	len2 = printf("%p", p1);
	printf("\n\n");

	fflush(stdout);

	if (len != len2)
	{
		printf("Lengths differ.\n");
		printf("\n\n");
		fflush(stdout);
		return 1;
	}

	// Test case 2
	printf("\n---------------\n");
	void *p2 = NULL;
	len = ft_printf("%p", p2);
	printf("\n\n");
	len2 = printf("%p", p2);
	printf("\n\n");

	fflush(stdout);

	if (len != len2)
	{
		printf("Lengths differ.\n");
		printf("\n\n");
		fflush(stdout);
		return 1;
	}

	// Test case 3
	printf("\n---------------\n");
	void *p3 = (void *)0x7fff5100b6f8;
	len = ft_printf("Can you print an address?\n%p\nNice!\n", p3);
	printf("\n\n");
	len2 = printf("Can you print an address?\n%p\nNice!\n", p3);
	printf("\n\n");

	fflush(stdout);

	if (len != len2)
	{
		printf("Lengths differ.\n");
		printf("\n\n");
		fflush(stdout);
		return 1;
	}

	// Test case 4
	printf("\n---------------\n");
	void *p4 = (void *)0x7fff5100b6f8;
	void *p5 = (void *)0x7faf51f0f608;
	void *p6 = (void *)0x6ff42510b6f8;
	void *p7 = (void *)0x7fff510236f8;
	len = ft_printf("Can you print several addresses?\n%p,%p,%p,%p\nNice!\n", p4, p5, p6, p7);
	printf("\n\n");
	len2 = printf("Can you print several addresses?\n%p,%p,%p,%p\nNice!\n", p4, p5, p6, p7);
	printf("\n\n");

	fflush(stdout);

	if (len != len2)
	{
		printf("Lengths differ.\n");
		printf("\n\n");
		fflush(stdout);
		return 1;
	}

	// Test case 5
	printf("\n---------------\n");
	printf("\n\n");
	printf("\n\n");

	fflush(stdout);

	if (len != len2)
	{
		printf("Lengths differ.\n");
		printf("\n\n");
		fflush(stdout);
		return 1;
	}

	// Test case 6
	printf("\n---------------\n");
	void *p8 = (void *)-1;
	len = ft_printf("Can you print an address?\n%p\nNice!\n", p8);
	printf("\n\n");
	len2 = printf("Can you print an address?\n%p\nNice!\n", p8);
	printf("\n\n");

	fflush(stdout);

	if (len != len2)
	{
		printf("Lengths differ.\n");
		printf("\n\n");
		fflush(stdout);
		return 1;
	}

	// Test case 7
	printf("\n---------------\n");
	void *p9 = (void *)0x7fff5100b6f8;
	len = ft_printf("%pppp", p9);
	printf("\n\n");
	len2 = printf("%pppp", p9);
	printf("\n\n");

	fflush(stdout);

	if (len != len2)
	{
		printf("Lengths differ.\n");
		printf("\n\n");
		fflush(stdout);
		return 1;
	}
	//test char
	//
	/* ===========> %c <=========== */
	printf("----------------------\n");
	printf("----> CHAR CASES <----\n");
	printf("----------------------\n");
	ft_putchar(10);
	len_1 = printf("Expected output:    %c\n", 53);
	len_2 = ft_printf("Current output:     %c\n", 53);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %cc\n", 'a');
	len_2 = ft_printf("Current output:     %cc\n", 'a');
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %cAAA\n", 'a');
	len_2 = ft_printf("Current output:     %cAAA\n", 'a');
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %c\n", '\0');
	len_2 = ft_printf("Current output:     %c\n", '\0');
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %%%c\n", 'y');
	len_2 = ft_printf("Current output:     %%%c\n", 'y');
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	
	// test cases %
	printf("----------------------\n");
	printf("-> PERCENTAGE CASES <-\n");
	printf("----------------------\n");
	len_1 = printf("Expected output:    %%\n");
	len_2 = ft_printf("Current output:     %%\n");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %%%%%%\n");
	len_2 = ft_printf("Current output:     %%%%%%\n");
	printf("%d", len_1);
	printf("%d", len_2);
	return (0);
}
