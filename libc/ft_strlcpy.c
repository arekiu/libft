/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 11:54:27 by aschmidt          #+#    #+#             */
/*   Updated: 2024/04/24 18:03:02 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <unistd.h>
#include <bsd/string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t n);
static size_t	ft_strlen(const char *str);
//compile the original strlcpy cc -Wall -Wextra -Werror ft_strlcpy.c -lbsd

int	main(void)
{
	/*char str[] = "holandas";
	char str1[] = "";
	 size_t result = strlcpy(str, str1, 3);

    printf("Copied characters: %zu\n", result); // Use %zu for size_t

    printf("Modified string: %s\n", str);*/

	char src[] = "coucou";
	char dest[10]; memset(dest, 'A', 10);

	 size_t result = strlcpy(src, dest, 0);

    printf("Copied characters: %zu\n", result); // Use %zu for size_t

    printf("Modified string: %s\n", src);

	char src1[] = "coucou";
	char dest1[10]; memset(dest1, 'A', 10);

	 size_t result1 = ft_strlcpy(src1, dest1, 0);

    printf("Copied characters FT: %zu\n", result1); // Use %zu for size_t

    printf("Modified string FT: %s\n", src1);
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

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*desti;
	unsigned char	*sourc;
	size_t			i;

	desti = (unsigned char *)dest;
	sourc = (unsigned char *)src;
	i = 0;
	if (n == 0)
		return (dest);
	if (!desti || !sourc)
		return (NULL);
	while (i < n)
	{
		desti[i] = sourc[i];
		i++;
	}
	return (desti);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	len;

	len = ft_strlen(src);
	if (len + 1 <= n)
		ft_memcpy(dest, src, n);
	else if (n != 0)
	{
		ft_memcpy(dest, src, n - 1);
		dest[n - 1] = '\0';
	}
	return (len);
}
