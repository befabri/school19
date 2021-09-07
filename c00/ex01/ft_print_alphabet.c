#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1); 
}

void	ft_print_alphabet(void)
{
	int	c;

	c = 'a';
	while (c != ('z' + 1))
	{
		ft_putchar(c);
		c++;
	}
}
