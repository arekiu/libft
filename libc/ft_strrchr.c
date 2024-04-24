/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 18:07:55 by aschmidt          #+#    #+#             */
/*   Updated: 2024/04/24 14:08:34 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
/*
char	*ft_strrchr(const char *str, int c);

int	main(void)
{
	char	*str = "wow!";
	char	c = 'w';

	printf("aca esta: %s\n", strrchr(str,c));

	char	*str1 = "wow!";
	char	c1 = 'w';

	printf("aca esta FT:%s\n", ft_strrchr(str1,c1));
}

static size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}*/

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i -1 >= 0)
	{
		if (str[i] == c)
			return ((char *)(str + i));
		i--;
	}
	return (0);
}
