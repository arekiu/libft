/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:26:21 by aschmidt          #+#    #+#             */
/*   Updated: 2024/04/23 10:46:01 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
/*#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n);

int	main(void)
{
	char	*str = "donde estan los ladrones";
	char	c = 'e';

	printf("aca esta: %s\n", memchr(str,c,10));

	char	*str1 = "donde estan los ladrones";
	char	c1 = 'e';

	printf("aca esta FT: %s\n", ft_memchr(str1,c1,10));
}*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*str;
	unsigned char	ch;

	i = 0;
	str = (unsigned char *)s;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (str[i] == ch)
			return (str + i);
		i++;
	}
	return (0);
}
