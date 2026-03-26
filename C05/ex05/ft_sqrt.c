/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 21:41:09 by lupin             #+#    #+#             */
/*   Updated: 2026/03/24 21:53:29 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	while (i * i < nb)
		i++;
	if (i * i == nb)
		return (i);
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	int	nb = 25;
	printf("raiz de %i : %i", nb, ft_sqsrt(nb));
	return 0;
}*/
