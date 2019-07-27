/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:11:11 by bannabel          #+#    #+#             */
/*   Updated: 2019/04/04 17:09:35 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	i;
	int	*str;

	i = 0;
	if (max <= min)
		return (0);
	if (!(str = (int*)malloc((max - min) * sizeof(int))))
		return (0);
	while (min + i < max)
	{
		str[i] = min + i;
		i++;
	}
	return (str);
}
