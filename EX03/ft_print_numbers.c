#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_numbers(void)
{
	char alpha;
	alpha = '0';
	while(alpha <= '9')
	{
		ft_putchar(alpha);
		alpha++;
	}	
}
