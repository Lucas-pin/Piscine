/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 20:34:04 by lupin             #+#    #+#             */
/*   Updated: 2026/03/24 21:47:16 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		return (ft_recursive_power(nb, power - 1) * nb);
	return (nb);
}

/*
#include <stdio.h>
int	main(void)
{
	int nb = 0;
	printf("factorial de %i = %i\n", nb, ft_recursive_power(nb, 2));
	nb = 1;
	printf("factorial de %i = %i\n", nb, ft_recursive_power(nb, 2));
	nb = 3;
	printf("factorial de %i = %i\n", nb, ft_recursive_power(nb, 2));
	nb = -5;
	printf("factorial de %i = %i\n", nb, ft_recursive_power(nb, 3));
	return (0);
}*/