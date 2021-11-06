/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnicolas <jnicolas@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:20:02 by jnicolas          #+#    #+#             */
/*   Updated: 2021/10/22 19:09:12 by jnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	mem;

	i = 0;
	mem = -1;
	while (s[i])
	{
		if (s[i] == (char)c)
			mem = i;
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	if (mem != -1)
		return ((char *)&s[mem]);
	return (NULL);
}
