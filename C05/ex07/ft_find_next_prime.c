/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 22:27:04 by lupin             #+#    #+#             */
/*   Updated: 2026/03/24 21:57:21 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 2)
		return (i);
	while (i < nb)
	{
		if (nb % i == 0)
		{
			nb++;
			i = 2;
		}
		i++;
	}
	return (nb);
}

/*
#include <stdio.h>
int	main(void)
{
	int	nb = 8;
	printf("El numpero primo siguiente a %i es primo %i", nb, ft_is_prime(nb));
	return 0;
}*/