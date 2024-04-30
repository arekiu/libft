/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:48:30 by aschmidt          #+#    #+#             */
/*   Updated: 2024/04/30 11:00:08 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

static void	custom_toupper(unsigned int index,char *ch)
{
	if (*ch >= 'a' && *ch <= 'z')
		*ch = *ch - 32;
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
}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int		i;

	i = 0;
	while(i < ft_strlen(s))
	{
		(*f)(i, &s[i]);
		i++;
	}
}

int	main(void)
{
	char str[] = "holiwis";
	ft_striteri(str, &custom_toupper);
	printf("after: %s\n", str);
}
