#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

void test(int s,...)
{
	
	int      i;
	va_list test;

	i = 0;
	va_start(test, s);

	int value = va_arg(test, int);
	printf("%d => %d \n", i, value);
	value = va_arg(test, int);
	printf("%d => %d \n", i, value);
	value = va_arg (test, int);
	printf("%d => %d \n", i, value);
	va_end(test);
}

int main()
{
	test(20,2,66554432315,40,50,6,7,7,8,9);
}
