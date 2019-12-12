/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 16:37:16 by dtony             #+#    #+#             */
/*   Updated: 2019/12/12 07:41:02 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memrcpy(void *dst, const void *src, size_t n)
{
	while (n--)
		(unsigned char)(dst[n]) = (unsigned char)(src[n]);
	return (dst); 
}
