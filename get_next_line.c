/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/25 10:37:52 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/25 13:44:26 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft.h"

int		len(char *buf, int i)
{
	int len;

	len = 0;
	while (buf[i + len] != '\n' && buf[i + len] != '\0')
		len++;
	return (len);
}

char	*read_buf(int fd)
{
	int		bytes_read;
	char	*buf;
	char	*ptr;
	char	buffer[BUFF_SIZE + 1];

	bytes_read = 1;
	if ((buf = (char *)malloc(0)) == NULL)
		return (NULL);
	while (bytes_read != 0)
	{
		if ((bytes_read = read(fd, buffer, BUFF_SIZE)) == -1)
			return (NULL);
		buffer[bytes_read] = '\0';
		ptr = buf;
		if ((buf = ft_strjoin(buf, buffer)) == NULL)
			return (NULL);
		free (ptr);
		ft_memset(buffer, 0, BUFF_SIZE);
	}
	return (buf);
}

int		get_next_line(int const fd, char **line)
{
	static int		i = 0;
	int				b;
	static char		*buf;

	if (BUFF_SIZE >= MAX_BUFF_SIZE || BUFF_SIZE <= 0)
		return (-1);
	if (i == 0)
		if ((buf = read_buf(fd)) == NULL)
			return (-1);
	if ((*line = (char*)malloc((len(buf, i) + 1) * sizeof(char))) == NULL)
		return (-1);
	b = -1;
	while (buf[i + ++b] != '\n' && buf[i + b] != '\0')
		line[0][b] = buf[i + b];
	i = i + b;
	if (buf[i] == '\0')
	{
		line[0][b] = '\0';
		return (0);
	}
	line[0][b] = '\0';
	i++;
	return (1);
}
