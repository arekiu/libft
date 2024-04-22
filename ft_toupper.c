/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:42:55 by aschmidt          #+#    #+#             */
/*   Updated: 2024/04/22 15:43:12 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_toupper(int ch);

int	main(void)
{
	printf("%d", ft_toupper(101));
}
*/
int	ft_toupper(int ch)
{
	if (ch >= 'a' && ch <= 'z')
		ch = ch - 32;
	return (ch);
}
