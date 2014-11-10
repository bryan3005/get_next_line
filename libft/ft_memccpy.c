/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 14:08:20 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/09 12:12:54 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	char				*pchar1;
	char				*pchar2;
	unsigned char		b;

	b = (unsigned char)c;
	pchar1 = (char *)src;
	pchar2 = (char *)dst;
	i = 0;
	while (n > 0)
	{
		pchar2[i] = pchar1[i];
		if (pchar2[i] == b)
			return (dst + i + 1);
		i++;
		n--;
	}
	return (NULL);
}
