/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 15:09:14 by dtony             #+#    #+#             */
/*   Updated: 2019/12/12 07:43:05 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*map;

	i = 0;
	if (s)
	{
		if (!(map = (char *)malloc(sizeof(s) + 1)))
			return (NULL);
		while (s[i++])
			map[i] = f(i, map[i]);
		map[i] = '\0';
		return (map);
	}
	return (NULL);
}
