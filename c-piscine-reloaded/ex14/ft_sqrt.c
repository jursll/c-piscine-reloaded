#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i <= nb && i <= 46340)
	{
		if (i * i == nb)
			return (i);
		else
			i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n%d", ft_sqrt(25), ft_sqrt(13));
	return (0);
}
*/
