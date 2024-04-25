/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:54:27 by aschmidt          #+#    #+#             */
/*   Updated: 2024/04/25 16:25:34 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <unistd.h>
#include <bsd/string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t n);
static size_t	ft_strlen(const char *str);
//compile the original strlcpy cc -Wall -Wextra -Werror ft_strlcpy.c -lbsd

int	main(void)
{
	char src[] = "lala";
	char dest[] = "AAAAAAAAAA";

	 size_t result = strlcpy(dest, src, 3);

    printf("Copied characters: %zu\n", result); // Use %zu for size_t

    printf("Modified string: %s\n", dest);

	char src1[] = "lala";
	char dest1[] = "AAAAAAAAAA";

	 size_t result1 = ft_strlcpy(dest1, src1, 3);

    printf("Copied characters FT: %zu\n", result1); // Use %zu for size_t

    printf("Modified string FT: %s\n", dest1);
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

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(src);
	if (n == 0)
		return (len);
	while (i < (n - 1) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
