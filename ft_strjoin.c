/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 12:09:33 by dtony             #+#    #+#             */
/*   Updated: 2019/11/27 12:17:01 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*join;

	i = 0;
	j = 0;
	if (!(join = malloc(ft_strlen(s1) + ft_strlen(s2) - 1)))
		return (NULL);
	while (s1[i++])
		join[i] = s1[i];
	while (s2[j++])
		join[i + j] = s2[j];
	join[i + j] = '\0';
	return (join);
}