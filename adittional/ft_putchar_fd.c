/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aschmidt <aschmidt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:12:35 by aschmidt          #+#    #+#             */
/*   Updated: 2024/04/30 12:14:11 by aschmidt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//include "libft.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	main(void)
{
	int	fd; //(file descriptor): indicator where file is open
	char	buf[10]; //where the content of the dictionary will be stored
	ssize_t nr_bytes; //number of read chars

	fd = open("test.txt", O_WRONLY); // open(*pathname of file, flag (what to do with the file)

	if(fd == -1) //if there's a problem fd returns -1, if not returns random positiv int
	{
		printf("Error opening the file \n");
	}
	else
	{
		ft_putchar_fd('y', fd);
		nr_bytes = read(fd, buf, 10); // read (file descriptor, (buf)where will save, 1 max bytes to read
		printf("Number of char: %d, content: %s", (int)nr_bytes, buf);
		close(fd); //to close needs the number to know where the file was open
	}

	return (0);
}
