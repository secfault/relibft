/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 17:14:30 by dtony             #+#    #+#             */
/*   Updated: 2019/11/23 17:41:08 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	void	*zone;

	i = 0;
	while (i++ <= count)
	{
		if (!(zone[i] = malloc(size)))
		{
			errno = ENOMEM;
			return (NULL);
		}
		ft_bzero(zone, size);
	}
	return (zone);
}