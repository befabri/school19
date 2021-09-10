#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void rush(int x, int y)
{
	char tab[] = "ABBBCB   B   ABBBC"
	int i;

	if (x<1 || y<1)
	{
		printf("NOTHING");
		return;
	}

	while(tab[i]!='\0')
	{
		if (tab[i]=='B')
		{
			printf("Oui")
		}
		i++;
	}
}


int main()
{
	rush(5, 5);
	return (0);
}
