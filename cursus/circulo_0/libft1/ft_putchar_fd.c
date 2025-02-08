/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 18:27:10 by didac             #+#    #+#             */
/*   Updated: 2025/01/11 19:16:44 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*int	main(void)
{
	int	i = 0;
	char	str[] = "prova";
	while(str[i] != '\0')
	{
		ft_putchar_fd(str[i], 1);
		i++;
	}
	return (0);
}*/
