/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/11 16:49:13 by dtony             #+#    #+#             */
/*   Updated: 2019/11/11 16:52:25 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;

    i = 0;
    while (i++ < n)
        if ((unsigned char)(s1[i]) != (unsigned char)(s2[i]))
            return (s1 - s2);
    return (0);
}