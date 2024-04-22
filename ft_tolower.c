#include <stdio.h>

int	ft_tolower(int ch);

int	main(void)
{
	printf("%d", ft_tolower(71));
}

int	ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		ch = ch + 32;
	return (ch);
}
