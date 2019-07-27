/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:10:51 by bannabel          #+#    #+#             */
/*   Updated: 2019/04/02 16:38:04 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		++i;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_params(char *c)
{
	while (*c)
	{
		ft_putchar(*c);
		c++;
	}
}

int		main(int ac, char **av)
{
	int		i;
	char	*c;

	i = 2;
	ac = 1;
	while (av[ac])
	{
		while (av[i])
		{
			if (ft_strcmp(av[ac], av[i]) > 0)
			{
				c = av[ac];
				av[ac] = av[i];
				av[i] = c;
			}
			i++;
		}
		ft_sort_params(av[ac]);
		ft_putchar('\n');
		ac++;
		i = ac + 1;
	}
	return (0);
}
