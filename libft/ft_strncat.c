/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 10:13:46 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/10 10:19:32 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	ptr = ft_strdup(s1);
	s1 = (char *)malloc ((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char));
	if (s1 == NULL)
		return (NULL);
	while (ptr[i])
	{
		s1[i] = ptr[i];
		i++;
	}
	while (s2[j] && n > 0)
	{
		s1[i] = s2[j];
		j++;
		i++;
		n--;
	}
	s1[i] = '\0';
	return (s1);
}
