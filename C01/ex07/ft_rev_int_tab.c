/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 20:10:05 by lupin             #+#    #+#             */
/*   Updated: 2026/03/08 20:33:57 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	init;

	aux = 0;
	init = 0;
	while (size - init > 0)
	{
		aux = tab[size - 1];
		tab[size - 1] = tab[init];
		tab[init] = aux;
		init++;
		size--;
	}
}

/*
int	main(void)
{
	int	nbr[3];
	int	size;
	int	i = 0;

	nbr[0] = 4;
	nbr[1] = 2;
	nbr[2] = 3;
	size = 3;
	ft_rev_int_tab(nbr, 3);
	while (i < size)
	{
		printf ("nbr: %i\n", nbr[i]);
		i++;
	}
	return (0);
}
*/
