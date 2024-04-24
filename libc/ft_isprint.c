/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 19:46:48 by aschmidt          #+#    #+#             */
/*   Updated: 2024/04/24 13:54:30 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

int	ft_isprint(int num);

int	main(void)
{
	printf("%d", ft_isprint(16));
}
*/
int	ft_isprint(int num)
{
	if (num >= 32 && num <= 126)
		return (1);
	else
		return (0);
}
