/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 15:56:39 by lupin             #+#    #+#             */
/*   Updated: 2026/03/12 18:43:05 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int main(void)
{
	int nbr = 1;
	int nbr2 = 4;
	printf("nbr: %i, nbr2: %i", nbr, nbr2);
	ft_swap(&nbr, &nbr2);
	printf("nbr: %i, nbr2: %i", nbr, nbr2);
	return (0);
}
