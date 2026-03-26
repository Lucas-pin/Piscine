/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 22:33:28 by lupin             #+#    #+#             */
/*   Updated: 2026/03/24 21:47:34 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ret;

	ret = 1;
	if (power < 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	while (power >= 1)
	{
		ret *= nb;
		power--;
	}
	return (ret);
}

/*
#include <stdio.h>
int	main(void)
{
	int nb = 0;
	printf("power de %i = %i\n", nb, ft_iterative_power(nb, 2));
	nb = 1;
	printf("power de %i = %i\n", nb, ft_iterative_power(nb, 2));
	nb = -3;
	printf("power de %i = %i\n", nb, ft_iterative_power(nb, 3));
	nb = 5;
	printf("power de %i = %i\n", nb, ft_iterative_power(nb, 2));
	return (0);
}*/
