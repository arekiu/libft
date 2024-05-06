/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:30:11 by aschmidt          #+#    #+#             */
/*   Updated: 2024/05/03 12:02:18 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	number_to_char(int nb, int fd)
{
	int		last;
	char	reverse[11];
	int		i;

	i = 0;
	while (nb > 0)
	{
		last = nb % 10;
		nb = (nb - last) / 10;
		reverse[i] = last + '0';
		i++;
	}
	reverse[i] = '\0';
	i--;
	while (i >= 0)
	{
		write(fd, &reverse[i], 1);
		i--;
	}
}

void	ft_putnbr_fd(int nb, int fd)
{
	char	one_char;

	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		write(fd, "-", 1);
	}
	if (nb > 9)
	{
		number_to_char(nb, fd);
	}
	else
	{
		one_char = nb + '0';
		write(fd, &one_char, 1);
	}
}
/*
#include <fcntl.h>

int	main(void)
{
	int	fd; 
	char	buf[50]; 
	ssize_t nr_bytes; 

	fd = open("test.txt", O_WRONLY); 

	if(fd == -1) 
	{
		printf("Error opening the file \n");
	}
	else
	{
		ft_putnbr_fd(5682, fd);
		nr_bytes = read(fd, buf, 50); 
		printf("Number of char: %d, content: %s", (int)nr_bytes, buf);
		close(fd); 
	}

	return (0);
}*/
