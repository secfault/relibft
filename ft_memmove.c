/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 16:42:13 by dtony             #+#    #+#             */
/*   Updated: 2019/11/11 16:44:53 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    if (src > dst)
        return (ft_memcpy(dst, src, len));
    if (dst > src)
        return (ft_memrcpy(dst, src, len));
    return (0);
}