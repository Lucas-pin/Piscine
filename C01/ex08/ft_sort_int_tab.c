/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 18:54:45 by lupin             #+#    #+#             */
/*   Updated: 2026/03/09 19:20:36 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	ft_check_order(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
			return (1);
		i++;
	}
	return (0);
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	flag;
	int	i;

	flag = ft_check_order(tab, size);
	i = 0;
	while (flag)
	{
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
				ft_swap(&tab[i], &tab[i + 1]);
			i++;
		}
		flag = ft_check_order(tab, size);
		i = 0;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	int	arr[9] = {5, 1, 5, 6, 8, 0, 14, 20, 10};
	int	i = 0;
	while (i < 9)
	{
		printf("%i,", arr[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(arr, 9);
	i = 0;
	while (i < 9)
	{
		printf("%i,", arr[i]);
		i++;
	}
}
*/