/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 10:44:04 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/10 10:48:17 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str1, const char *str2)
{
	int				i;
	int				j;
	char			*ptr;

	i = 0;
	j = 0;
	ptr = ft_strdup(str1);
	while (str1[i])
	{
		ptr[i] = str1[i];
		i++;
	}
	i = 0;
	while (ptr[i])
	{
		while (ptr[i + j] == str2[j])
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
