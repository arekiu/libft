/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:45:09 by aschmidt          #+#    #+#             */
/*   Updated: 2024/04/24 13:53:19 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*#include <stdio.h>

int	ft_isalnum(int num);

int	main(void)
{
	printf("%d", ft_isalnum('-'));
}
*/
int	ft_isalnum(int num)
{
	if ((num >= 'a' && num <= 'z') || (num >= 'A' && num <= 'Z'))
		return (1);
	else if (num >= '0' && num <= '9')
		return (1);
	else
		return (0);
}
