/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:54:27 by aschmidt          #+#    #+#             */
/*   Updated: 2024/04/19 11:54:29 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <bsd/string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t n);
static size_t	ft_strlen(const char *str);
//compile the original strlcpy cc -Wall -Wextra -Werror ft_strlcpy.c -lbsd

int	main(void)
{
	char str[] = "holandas";
	char str1[] = "";
	 size_t result = strlcpy(str, str1, 3);

    printf("Copied characters: %zu\n", result); // Use %zu for size_t

    printf("Modified string: %s\n", str);
}*/

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

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}
