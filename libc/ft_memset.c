/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 11:19:38 by aschmidt          #+#    #+#             */
/*   Updated: 2024/04/24 13:57:47 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
/*#include <string.h>
#include <stdio.h>

void	*ft_memset(void *str, int c, size_t n);

int main () {
   char str[50];

   strcpy(str,"Holis chee");
   puts(str);

   ft_memset(str,'$',7);
   puts(str);

   memset(str,'$',7);
   puts(str);
   return(0);
}*/

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*st;
	unsigned char	ch;

	i = 0;
	st = (unsigned char *)str;
	ch = (unsigned char)c;
	while (i < n)
	{
		st[i] = ch;
		i++;
	}
	return (st);
}
