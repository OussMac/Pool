#include <unistd.h>

void helper_func(int n, int digits, int base,char *v)
{
	if (digits == n)
	{
		write(1, v, n);
		if (!(v[0] == '9' - n + 1 && v[n-1] == '9'))
		{
		write(1, ", ", 2);
		return;
		}
	}

	int i;
	i = base;
	while (i <= 10 - n + digits)
	{
		v[digits] = 48 + i;
		helper_func(n, digits + 1, i + 1, v);
		i++;
	}
}

void ft_print_combn(int n)
{
	if (n < 0 || n > 10)
	{
	write(1, "n Has to be 0<n<10", 18);
	return;
	}
	char v[10] = {0};
	helper_func(n, 0, 0, v);
}

int main()
{
	ft_print_combn(4);
	return 0;
}
