/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 17:42:28 by dtony             #+#    #+#             */
/*   Updated: 2019/11/21 17:58:32 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t  i;

    i = 0;
    while (src[i++] && i < dstsize)
        dst[i] = src[i];
    if (dstsize != 0)
        dst[i] = '\0';
    return (ft_strlen(src));
}