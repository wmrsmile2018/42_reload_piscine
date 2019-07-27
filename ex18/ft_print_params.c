/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 16:10:35 by bannabel          #+#    #+#             */
/*   Updated: 2019/04/02 16:10:38 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar (char c);

int		main(int ac, char **av)
{
	int	j;

	ac = 1;
	while (av[ac])
	{
		j = 0;
		while (av[ac][j])
		{
			ft_putchar(av[ac][j]);
			j++;
		}
		ft_putchar('\n');
		ac++;
	}
	return (0);
}
