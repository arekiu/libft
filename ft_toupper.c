#include <stdio.h>

int	ft_toupper(int ch);

int	main(void)
{
	printf("%d", ft_toupper(101));
}

int	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		ch = ch - 32;
	return (ch);
}
