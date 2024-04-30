/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:14:02 by aschmidt          #+#    #+#             */
/*   Updated: 2024/04/30 12:28:38 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include "libft.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

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

void ft_putnbr_fd(int nb, int fd)
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

int	main(void)
{
	int	fd; //(file descriptor): indicator where file is open
	char	buf[50]; //where the content of the dictionary will be stored
	ssize_t nr_bytes; //number of read chars

	fd = open("test.txt", O_WRONLY); // open(*pathname of file, flag (what to do with the file)

	if(fd == -1) //if there's a problem fd returns -1, if not returns random positiv int
	{
		printf("Error opening the file \n");
	}
	else
	{
		ft_putnbr_fd(5682, fd);
		nr_bytes = read(fd, buf, 50); // read (file descriptor, (buf)where will save, 1 max bytes to read
		printf("Number of char: %d, content: %s", (int)nr_bytes, buf);
		close(fd); //to close needs the number to know where the file was open
	}

	return (0);
}
