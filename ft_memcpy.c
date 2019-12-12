/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 16:27:12 by dtony             #+#    #+#             */
/*   Updated: 2019/12/12 07:40:47 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t  i;

	i = 0;
	while (i++ < n)
		(unsigned char)(dst[i]) = (unsigned char)(src[i]);
	return (dst); 
}
