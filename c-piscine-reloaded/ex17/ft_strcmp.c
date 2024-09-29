#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s2[i] - s1[i]);
		i++;
	}
	return (s2[i] - s1[i]);
}
/*
int	main(int ac, char **av)
{
	if (ac == 3)
		printf("%d", ft_strcmp(av[1], av[2]));
	else
		return (0);
	return (0);
}
*/
