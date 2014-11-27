/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 10:55:43 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/26 15:09:15 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int		fd;
	char	*str;
	int		ret;

	if (argc == 2)
		fd = open(argv[1], O_RDWR | O_CREAT);
	else
		fd = 0;
	while (1)
	{
		ret = get_next_line(fd, &str);
		if (ret == 0 || ret == 1)
		{
			ft_putnbr(ret);
			ft_putendl(str);
			if (ret == 0)
				return (0);
		}
		if (ret == -1)
		{
			ft_putendl("An error occured");
			return (0);
		}
	}
	return (0);
}
