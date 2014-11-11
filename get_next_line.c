/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 14:32:43 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/11 16:25:24 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char		*mallo(char **line, char *buf)
{
	int	len;

	len = 0;
	while (buf[len] != '\n')
		len++;
	*line = (char*)malloc(len * sizeof(char));
	if (*line == NULL)
		return (NULL);
	line[0][len] = '\0';
	return (*line);
}

int			get_next_line(int const fd, char **line)
{
	char		buf[BUFF_SIZE + 1];
	static int	i = 0;
	int			z;

	z = 0;

	//printf("%s\n", "ess" );
	if (i == 0)
		if (read(fd, buf, BUFF_SIZE) <= 0)
			return (-1);
	//printf("%s\n", buf );
	if (mallo(line, buf) == NULL)
		return (-1);
	while (buf[i] != '\n' && buf[i] != '\0')
	{
		line[0][z] = buf[i];
		i++;
		z++;
	}
	//ft_putstr(*line);
	if (buf[i] == '\0')
		return (0);
	i++;
	//ft_putchar('\n');
	return (1);
}

int			main(void)
{

	int		fd;
	char	*txt;
	char	**ptr;
	int		i;

	i = 1;
	ptr = &txt;
	fd = open("putfd", O_RDWR | O_CREAT);

	//printf("%d\n\n$", fd);
	while (i <= 50)
	{
		get_next_line(fd, ptr);
		printf("%s", *ptr); 
		i++;
	}
	return (0);
}
