/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:51:11 by aschmidt          #+#    #+#             */
/*   Updated: 2024/04/18 12:51:13 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>

int	ft_isalpha(int numchar);

int	main(void)
{
	printf("%d", ft_isalpha(97));
}
*/
int	ft_isalpha(int num)
{
	char	nchar;

	nchar = num;
	if ((nchar >= 'a' && nchar <= 'z') || (nchar >= 'A' && nchar <= 'Z'))
		return (1);
	else
		return (0);
}
