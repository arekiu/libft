/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:37:23 by aschmidt          #+#    #+#             */
/*   Updated: 2024/04/22 16:57:25 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
/*
char	*ft_strchr(const char *str, int c);

int	main(void)
{
	char	*str = "habia una vez un circo";
	char	c = 'w';

	printf("aca esta: %s\n", strchr(str,c));

	char	*str1 = "habia una vez un circo";
	char	c1 = 'w';

	printf("aca esta FT:%s\n", ft_strchr(str1,c1));
}*/

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (str + i);
		i++;
	}
	return (0);
}
