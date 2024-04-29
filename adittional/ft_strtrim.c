/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 16:07:06 by aschmidt          #+#    #+#             */
/*   Updated: 2024/04/29 12:44:06 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set);

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

static int	check_start(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				i++;
				j = 0;
			}
			else
				j++;
		}
		return (i);
	}
	return (i);
}

static int	check_end(char const *s1, char const *set)
{
	int	i;
	int	j;

	i = ft_strlen(s1) - 1;
	while (s1[i] != 0)
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				i--;
				j = 0;
			}
			else
				j++;
		}
		return (i);
	}
	return (i);
}

int	main(void)
{
	char *str1 = "acbabcaba";
	char *set = "abc";


	printf("index start: %d\n", check_start(str1, set));
	printf("index end: %d\n", check_end(str1, set));
	printf("FT: %s\n", ft_strtrim(str1, set));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*buffer;
	int		start;
	int		end;
	int		len;
	int		i;

	i = 0;
	start = check_start(s1, set);
	end = check_end(s1, set);
	len = end - start + 1;
	if (len < 0)
		len = 0;
	buffer = malloc(sizeof(char) * (len + 1));
	if (buffer == NULL)
		return (NULL);
	while (start + i <= end)
	{
		buffer[i] = s1[start + i];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
