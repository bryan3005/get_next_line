/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 14:33:06 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/11 16:24:19 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#	ifndef GET_NEXT_LINE_H
#	define GET_NEXT_LINE_H


#define BUFF_SIZE 40969

#include "get_next_line.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
int		get_next_line(int const fd, char **line);






#	endif