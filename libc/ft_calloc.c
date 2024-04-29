/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 12:17:58 by aschmidt          #+#    #+#             */
/*   Updated: 2024/04/25 18:26:54 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>  /* SIZE_MAX */
/*
void	*ft_calloc(size_t count, size_t size);

int	main()
{

	size_t count = 5;
    size_t size = sizeof(int);

 	void *ptr1 = ft_calloc(count, size);
    void *ptr2 = calloc(count, size);

    if (ptr1 == NULL || ptr2 == NULL) {
        printf("Memory allocation failed\n");
    }

    if (memcmp(ptr1, ptr2, count * size) == 0) {
        printf("Memory content is identical\n");
    } else {
        printf("Memory content differs\n");
    }
    free(ptr1);
    free(ptr2);

  return 0;
}*/

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*buffer;
	size_t			i;

	i = 0;
	if (size > 0 && count * size > SIZE_MAX)
		return (NULL);
	buffer = malloc(count * size);
	if (buffer == NULL)
	{
		return (NULL);
	}
	while (i < count * size)
	{
		buffer[i] = 0;
		i++;
	}
	return ((void *)buffer);
}
