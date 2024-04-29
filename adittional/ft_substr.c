/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 13:54:47 by aschmidt          #+#    #+#             */
/*   Updated: 2024/04/29 12:06:30 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	main(void)
{
	char *str = "la wea fome";

	printf("FT: %s\n", ft_substr(str, 25, 20));
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

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	i = 0;
	if (!str)
		return (NULL);
	if (start > ft_strlen(str))
		len = 0;
	if (len != 0 && len > ft_strlen(str + start))
		len = ft_strlen(str + start);
	sub = malloc(sizeof(char) * len + 1);
	if (sub == NULL)
		return (NULL);
	while (i < len && str)
	{
		sub[i] = str[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
