#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	x = 4;
	int	y = 2;
	int	div;
	int	mod;

	ft_div_mod(x, y, &div, &mod);
	printf("%d\n %d\n", div, mod);
	return (0);
}
*/
