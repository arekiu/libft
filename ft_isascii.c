/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 16:53:52 by aschmidt          #+#    #+#             */
/*   Updated: 2024/04/18 16:53:54 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_isascii(int num);

int	main(void)
{
	printf("%d", ft_isascii(128));
}
*/
int	ft_isascii(int num)
{
	if (num >= 0 && num <= 127)
		return (1);
	else
		return (0);
}
