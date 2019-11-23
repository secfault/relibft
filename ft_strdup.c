/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 17:42:30 by dtony             #+#    #+#             */
/*   Updated: 2019/11/23 17:46:17 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*str;

	i = 0;
	if (!(str = malloc(sizeof(*str) * sizeof(s1))))
		return (0);
	while (s1[i++])
		str[i] = s1[i];
	str[i] = '\0';
	return (str);
}