/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 13:51:30 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/09 14:03:42 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*pchar2;
	char		*srccpy;

	srccpy = (void *)src;
	pchar2 = (char *)dst;
	i = 0;
	while (n > 0)
	{
		pchar2[i] = srccpy[i];
		i++;
		n--;
	}
	return (dst);
}
