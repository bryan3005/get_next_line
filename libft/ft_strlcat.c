/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 08:59:44 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/10 09:14:05 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	int		z;
	size_t	ret;

	if (ft_strlen(dst) >= size)
		return (ft_strlen(src) + size);
	ret = ft_strlen(dst) + ft_strlen(src);
	while (dst[z])
		z++;
	while (src[i] && size - 1 - i - z > 0)
	{
		dst[z + i] = src[i];
		i++;
	}
	dst[i + z] = '\0';
	return (ret);
}
