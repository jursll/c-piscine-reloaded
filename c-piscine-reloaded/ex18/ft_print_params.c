#include <unistd.h>

void	ft_putchar(char c);

int	main(int ac, char **av)
{
	int	j;
	int	i;

	if (ac > 1)
	{
		j = 1;
		while (av[j])
		{
			i = 0;
			while (av[j][i])
			{
				ft_putchar(av[j][i]);
				i++;
			}
			ft_putchar(10);
			j++;
		}
		return (0);
	}
	else
		return (0);
	return (0);
}
