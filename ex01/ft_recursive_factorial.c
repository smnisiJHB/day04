#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 16)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

int ft_recursive_factorial(int nb);

int main(){
	int n = ft_recursive_factorial(9);
	printf("%d\n", n);
}
