/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 21:50:49 by lupin             #+#    #+#             */
/*   Updated: 2026/03/19 22:03:16 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factorial;

	i = 1;
	factorial = 1;
	if (nb < 0)
		return (0);
	while (i <= nb)
	{
		factorial = factorial * i;
		i++;
	}
	return (factorial);
}

/*
#include <stdio.h>
int	main(void)
{
	int nb = 0;
	printf("factorial de %i = %i\n", nb, ft_iterative_factorial(nb));
	nb = 1;
	printf("factorial de %i = %i\n", nb, ft_iterative_factorial(nb));
	nb = 3;
	printf("factorial de %i = %i\n", nb, ft_iterative_factorial(nb));
	nb = 5;
	printf("factorial de %i = %i\n", nb, ft_iterative_factorial(nb));
	return (0);
}*/