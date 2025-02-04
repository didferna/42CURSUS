/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didferna <didferna@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/03 17:30:01 by didferna          #+#    #+#             */
/*   Updated: 2025/01/03 20:04:09 by didferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_buffercont(char *argv)
{
	char	buffer[1024];
	size_t	buf;
	int		fd;

	fd = open(argv, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	buf = read(fd, buffer, 1024);
	while (buf > 0)
	{
		write(1, buffer, buf);
		buf = read(fd, buffer, 1024);
	}
	close(fd);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (argc != 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	ft_buffercont(argv[1]);
}
