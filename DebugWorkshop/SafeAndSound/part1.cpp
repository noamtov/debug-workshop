#include "part1.h"
#include <iostream>

char* string_copy(char* dest, unsigned int destsize, char* src)
{
	char* ret = dest;
	while (destsize-- > 1  && (*dest++ = *src++))
		;
	*dest = '\0';
	return ret;
}

void part1()
{
	char password[] = "secret";
	char dest[13];
	char src[] = "hello world!";

	string_copy(dest, 13, src);

	std::cout << src << std::endl;
	std::cout << dest << std::endl;
}
