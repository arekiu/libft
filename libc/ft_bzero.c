/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 20:11:28 by aschmidt          #+#    #+#             */
/*   Updated: 2024/04/18 20:11:31 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n);

int	main(void)
{
	char str[20];
	strcpy(str, "Holis chee");
	puts(str);
	bzero(str, 3);
	puts(str);
	ft_bzero(str, 3);
	puts(str);
	return 0;
}*/

void	ft_bzero(void *s, size_t n)
{
	int				i;
	unsigned char	*st;

	i = 0;
	st = (unsigned char *)s;
	while (i < n)
	{
		st[i] = '\0';
		i++;
	}
}
