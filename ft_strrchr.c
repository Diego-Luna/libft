/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnicolas <jnicolas@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 15:20:02 by jnicolas          #+#    #+#             */
/*   Updated: 2021/10/19 16:58:56 by jnicolas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	mem;

	i = 0;
	i = -1;
	while (s[i])
	{
		if (s[i] == (char)c)
			mem = i;
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	if (mem != 1)
		return ((char *)&s[i]);
	return (NULL);
}
