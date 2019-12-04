/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 11:53:31 by dtony             #+#    #+#             */
/*   Updated: 2019/11/27 12:08:32 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	if (!(sub = malloc(sizeof(*sub) * len + 1)))
		return (NULL);
	while (i++ <= len)
		sub[i] = s[start + i];
	sub[i] = '\0';
	return (sub);
}