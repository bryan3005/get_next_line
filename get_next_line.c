/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 14:32:43 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/10 17:26:45 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
  #include <fcntl.h>
     #include <sys/types.h>
     #include <sys/uio.h>
     #include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
#define BUFF_SIZE 4096


int		get_next_line(int const fd, char **line)
{
	char buf[BUFF_SIZE + 1];
	static int i = 0;
	int z;

	z = 0;
	*line =(char*)malloc(BUFF_SIZE * sizeof(char));
	read(fd, buf, BUFF_SIZE);
	//printf("buf:%s\n",buf); 
	while (buf[i] != '\n')
	{
		line[0][z] = buf[i];
		i++;
		z++;
	}
	i++;
	if (buf[i] == '\n')
		i++;
	ft_putstr(*line);
}


int		main(void)
{
	
	int fd;
	char *txt;
	char **ptr;

	ptr = &txt;
	fd = open("putfd", O_RDWR | O_CREAT);
	get_next_line(fd, ptr);
	get_next_line(fd, ptr);
	get_next_line(fd, ptr);
	get_next_line(fd, ptr);
	return (0);
}