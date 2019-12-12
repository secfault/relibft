/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 07:52:26 by dtony             #+#    #+#             */
/*   Updated: 2019/12/12 07:52:32 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_sizer(char const *s1, char const *set)
{
	size_t		i;
	size_t		size;

	i = 0;
	size = 0;
	while (s1[i++])
	{
		if (ft_strncmp(s1 + i, set, ft_strlen(set)))
			i + ft_strlen(set);
		else
			size++;
	}
	return (size);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		size;
	char		*trim;

	i = 0;
	size = ft_sizer(s1, set) + 1;
	if (!(trim = malloc(sizeof(char) * size)))
		return (NULL);
	while (s1[i++])
	{
		if (ft_strncmp(s1 + i, set, ft_strlen(set)))
			i + ft_strlen(set);
		else
			trim[i] = s1[i];
	}
	trim[size] = '\0';
	return (trim);
}
