/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 10:08:51 by aschmidt          #+#    #+#             */
/*   Updated: 2024/04/29 10:44:11 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n);

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
		return ("-2147483648");
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
	printf("%s\n", ft_itoa(-4542));
}
