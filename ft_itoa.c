/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtony <dtony@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 13:55:26 by dtony             #+#    #+#             */
/*   Updated: 2019/12/12 07:46:47 by dtony            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_sizer(int nb)
{
	int		count;

	count = 1;
	if (nb < 0)
	{
		count++;
		nb = -nb;
	}
	if (nb > 9)
		while (nb / 10)
			count++;
	else
		count++;
	return (count);
}

char		*ft_itoa(int n)
{
	int		ln;
	int		ncpy;
	char	*itoa;

	ln = ft_sizer(n);
	ncpy = ((n < 0) ? -n : n);
	if (!(itoa = (char *)malloc(sizeof(char) * ln)))
		return (NULL);
	if (n < 0)
		itoa[0] = '-';
	if (n == 0)
		itoa[ln - 1] = '0';
	while (ncpy)
	{
		itoa[--ln] = ncpy % 10 + '0';
		ncpy /= 10;
	}
	return (itoa);
}
