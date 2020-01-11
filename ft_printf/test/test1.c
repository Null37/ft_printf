#include <stdio.h>
#include <string.h>

/*void  test(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1]  == 'c')
		{
			printf("find");
			break;
		}
		i++;
	}
}
*/

void  zero(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 2] != '%')
		{
			while (str[i] != 'c')
				i++;
			if (str[i] == 'c')
				printf("found the c bruuuuh");
		}
		i++;
	}
}

int main()
{
	char *str = "hello madam is %%.c";
	zero(str);
	//printf("%%c",'z');
	return (0);
}
