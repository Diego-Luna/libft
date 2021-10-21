/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnicolas <jnicolas@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 18:25:56 by jnicolas          #+#    #+#             */
/*   Updated: 2021/10/19 17:08:33 by jnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*s2;

	i = 0;
	s2 = (char *)s;
	if (s == NULL)
		return (NULL);
	while (s2[i] && i < n)
	{
		if (s2[i] == (char)c)
			return ((void *)&s2[i]);
		i++;
	}
	return (NULL);
}
