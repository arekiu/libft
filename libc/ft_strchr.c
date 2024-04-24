/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:37:23 by aschmidt          #+#    #+#             */
/*   Updated: 2024/04/24 15:57:43 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *str, int c);

int	main(void)
{
	char	*str = "tripouille";
	char	c = 't';

	printf("aca esta: %s\n", strchr(str,c));

	char	*str1 = "tripouille";
	char	c1 = 't';

	printf("aca esta FT:%s\n", ft_strchr(str1,c1));
}

char	*ft_strchr(const char *str, int c)
{
	int				i;
	unsigned char	ce;

	i = 0;
	ce = c;
	while (str[i] != '\0')
	{
		if (str[i] == ce)
			return ((char *)(str + i));
		i++;
	}
	if (str[i] == ce)
			return ((char *)(str + i));
	return (0);
}
