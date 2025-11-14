#include <stdarg.h>
#include <stdio.h>

void	print(int nb, ...)
{
	va_list args;
	va_start(args, nb);
	for(int i = 0;i < nb;i++)
	{
		printf("%d", va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}

int main()
{
	print(3,1,2,3);
	print(5,1,2,3,4,5);
	return 0;
}