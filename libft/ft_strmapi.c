/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbryan <mbryan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:08:29 by mbryan            #+#    #+#             */
/*   Updated: 2014/11/10 16:00:30 by mbryan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				i;
	unsigned int	index;
	char			*ptr;

	i = 0;
	index = 0;
	ptr = malloc(ft_strlen(s) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ptr[ft_strlen(s)] = '\0';
	while (s[i])
	{
		ptr[i] = f(index, s[i]);
		i++;
		index++;
	}
	return (ptr);
}
