/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 22:05:50 by lupin             #+#    #+#             */
/*   Updated: 2026/03/23 22:34:51 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	factorial;
	int	ret;

	factorial = 1;
	ret = 1;
	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	if (nb > 1)
		ret = ft_recursive_factorial(nb - 1);
	factorial = ret * nb;
	return (factorial);
}

/*
#include <stdio.h>
int	main(void)
{
	int nb = 0;
	printf("factorial de %i = %i\n", nb, ft_recursive_factorial(nb));
	nb = 1;
	printf("factorial de %i = %i\n", nb, ft_recursive_factorial(nb));
	nb = 3;
	printf("factorial de %i = %i\n", nb, ft_recursive_factorial(nb));
	nb = 5;
	printf("factorial de %i = %i\n", nb, ft_recursive_factorial(nb));
	return (0);
}
*/