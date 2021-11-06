/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnicolas <jnicolas@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:25:56 by jnicolas          #+#    #+#             */
/*   Updated: 2021/10/21 18:05:03 by jnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*s2;

	i = 0;
	s2 = (unsigned char *)s;
	//if (s == NULL)
	//	return (NULL);
	while ( i < n)
	{
		if (s2[i] == (unsigned char)c || s2[i] == '\0')
			return ((void *)&s2[i]);
		i++;
	}
	return (NULL);
}
