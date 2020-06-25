#include <unistd.h>

int ft_iterative_factorial(int nb)
{
	int result;

	result = 1;
	if (nb < 1 || nb > 10)
		return (0);
	while (nb > 1)
		result *= nb--;
	return (result);
}

