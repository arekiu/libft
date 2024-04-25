/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 09:03:07 by aschmidt          #+#    #+#             */
/*   Updated: 2024/04/25 14:14:56 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <unistd.h>
#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void * src, size_t n);

int main () {
   const char src[30] = "anoche no dormi";
   char dest[30];
   //strcpy(dest,"Holis me fui a la chota!");
 printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, 5);
   printf("After memcpy dest = %s\n", dest);
    const char src1[30] = "anoche no dormi";
   char dest1[30];
   //strcpy(dest1,"Holis me fui a la chota!");
     printf("Before ft_memcpy dest = %s\n", dest1);
    ft_memcpy(dest1, src1, 5);
    printf("After ft_memcpy dest = %s\n", dest1);

   return(0);
}*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*desti;
	unsigned char	*sourc;
	size_t			i;

	if (!dest && !src)
		return (dest);
	desti = (unsigned char *)dest;
	sourc = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		desti[i] = sourc[i];
		i++;
	}
	return (dest);
}
