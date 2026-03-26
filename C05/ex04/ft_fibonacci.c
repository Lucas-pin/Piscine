/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 20:44:05 by lupin             #+#    #+#             */
/*   Updated: 2026/03/23 21:40:40 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	sum;

	sum = 0;
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index > 1)
		sum = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	else
		return (index);
	return (sum);
}

/*
#include <stdio.h>
int	main(void)
{
	int nb = 0;
	printf("factorial de %i = %i\n", nb, ft_fibonacci(nb));
	nb = 1;
	printf("factorial de %i = %i\n", nb, ft_fibonacci(nb));
	nb = 2;
	printf("factorial de %i = %i\n", nb, ft_fibonacci(nb));
	nb = 3;
	printf("factorial de %i = %i\n", nb, ft_fibonacci(nb));
	nb = 4;
	printf("factorial de %i = %i\n", nb, ft_fibonacci(nb));
	nb = 5;
	printf("factorial de %i = %i\n", nb, ft_fibonacci(nb));
	nb = 6;
	printf("factorial de %i = %i\n", nb, ft_fibonacci(nb));
	return (0);
}*/