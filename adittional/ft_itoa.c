/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:08:51 by aschmidt          #+#    #+#             */
/*   Updated: 2024/04/30 10:13:26 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n);

static char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*buffer;

	size = ft_strlen(s1);
	buffer = malloc(sizeof(char) * size + 1);
	if (buffer == NULL)
	{
		return (NULL);
	}
	ft_strcpy(buffer, (char *)s1);
	return (buffer);
}

static int	num_len(int n)
{
	int	i;

	i = 0;
	if (n >= 0 && n < 10)
		return (1);
	if (n < 0)
	{
		i = i + 1;
		n = n * -1;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	int		count;
	char	*num_char;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	count = num_len(n);
	i = 0;
	num_char = (char *)malloc(sizeof(char) * (count + 1));
	if (!num_char)
		return (NULL);
	if (n < 0)
	{
		num_char[0] = '-';
		n = n * -1;
		i++;
	}
	num_char[count] = '\0';
	while (i < count)
	{
		num_char[count - 1] = ((n % 10) + 48);
		n = n / 10;
		count--;
	}
	return (num_char);
}

int	main(void)
{
	printf("%s\n", ft_itoa(-2147483648));

}
