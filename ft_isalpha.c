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

int	ft_isalpha(int num);

int	main(void)
{
	printf("%d", ft_isalpha('Z'));
}
*/
int	ft_isalpha(int num)
{
	if ((num >= 'a' && num <= 'z') || (num >= 'A' && num <= 'Z'))
		return (1);
	else
		return (0);
}
