/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 13:57:55 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/10 09:56:59 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (start > 0)
	{
		s++;
		start--;
	}
	ptr[len] = '\0';
	while (len > 0)
	{
		ptr[i] = s[i];
		i++;
		len--;
	}
	return (ptr);
}
