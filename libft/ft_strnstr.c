/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:17:37 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/10 10:48:09 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	j;
	char	*ptr;

	i = 0;
	j = 0;
	ptr = ft_strdup(str1);
	i = 0;
	while (str1[i] && i < n)
	{
		while (ptr[i + j] == str2[j] && i + j < n)
			j++;
		if (str2[j] == '\0' && ptr)
			return (ptr + i);
		else if (str2[j - 1] == '\0' && ptr != '\0')
			return (ptr + i);
		j = 0;
		i++;
	}
	return (NULL);
}
