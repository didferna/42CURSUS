/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: didac <didac@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/11 19:15:44 by didac             #+#    #+#             */
/*   Updated: 2025/01/11 19:28:30 by didac            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	i;
	char	*ptr;

	i = 0;
	ptr = s;
	while(ptr[i] != '\0')
	{
		write(fd, &ptr[i], 1);
		i++;
	}
}

int	main(void)
{
	ft_putstr_fd("holaa mundo", 1);
	ft_putstr_fd("pepo\n",1);
	return (0);
}