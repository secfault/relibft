/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 16:30:46 by dtony             #+#    #+#             */
/*   Updated: 2019/11/11 16:36:22 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    size_t  i;

    i = 0;
    while (i++ < n || (unsigned char)(src[i]) == (unsigned char)(c))
        (unsigned char)(dst[i]) = (unsigned char)(src[i]);
    return (i == n ? NULL : dst + i);
}