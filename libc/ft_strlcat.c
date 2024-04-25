/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:44:16 by aschmidt          #+#    #+#             */
/*   Updated: 2024/04/25 17:39:16 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <unistd.h>
#include <bsd/string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t n);
static size_t	ft_strlen(const char *str);
//compile the original strlcpy cc -Wall -Wextra -Werror ft_strlcat.c -lbsd
//useful doc https://c-for-dummies.com/blog/?p=3896

int	main(void)
{
	char str[20] = "AVEMARIA";
	char str1[] = "lala";
	 size_t result = strlcat(str, str1, 8);

    printf("Copied characters: %zu\n", result); // Use %zu for size_t

    printf("Modified string: %s\n", str);

	char stra[20] = "AVEMARIA";
	char strb[] = "lala";
	 size_t ft_result = ft_strlcat(stra, strb, 8);

    printf("Copied characters FT: %zu\n", ft_result); // Use %zu for size_t

    printf("Modified string FT: %s\n", stra);
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

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	result;

	i = 0;
	j = 0;
	result = ft_strlen(src) + ft_strlen(dest);
	if (n <= ft_strlen(dest))
		return (n + ft_strlen(src));
	while (dest[i] != '\0')
		i++;
	while (j < n - 1 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (result);
}
