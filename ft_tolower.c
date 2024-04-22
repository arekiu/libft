/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 15:41:57 by aschmidt          #+#    #+#             */
/*   Updated: 2024/04/22 15:42:23 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_tolower(int ch);

int	main(void)
{
	printf("%d", ft_tolower(71));
}
*/
int	ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		ch = ch + 32;
	return (ch);
}
