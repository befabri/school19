#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void display_char(char c, int nb)
{
	while(nb>0)
	{
		ft_putchar(c);
		nb--;
	}
}

void rush(int x, int y)
{
	char 	tab[] = "ABBBCBBBBABBBC";
	//char	tab[] = "ABCBBBBABC";
	int		i;
	char	delimiter;
	int		delimiter_found;
	char	search_char;
	char	begin_char;
	int		space_count;

	if (x<1 || y<1)
	{
		return;
	}
	i = 0;
	delimiter = 'C';
	delimiter_found = 0;
	search_char = 'B';
	begin_char = 'A';
	space_count = 0;
	while(tab[i]!='\0')
	{
		ft_putchar(tab[i]);
		if (space_count!=0 && tab[i]==delimiter)
			break;
		if ((delimiter_found % 2) == 1 && tab[i]==search_char)
		{
			display_char(' ', space_count);
			ft_putchar(search_char);
			ft_putchar('\n');
			delimiter_found +=2;
			i++;
		}
		else if (tab[i]==delimiter)
		{
			if (space_count == 0)
				space_count = i-1;
			ft_putchar('\n');
			delimiter_found = 1;
		}
		else if (tab[i]==begin_char)
		{
			delimiter_found = 0;
		}
		else
		{
		}
		i++;
	}
}


int main()
{
	rush(5, 5);
	return (0);
}
