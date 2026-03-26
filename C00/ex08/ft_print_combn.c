/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 11:28:05 by lupin             #+#    #+#             */
/*   Updated: 2026/03/07 21:33:14 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(int *array, int n, int space_flag)
{
	char	aux;
	int		i;

	i = 0;
	if (space_flag != 0)
		write (1, " ", 1);
	while (i < n)
	{
		aux = array[i] + '0';
		write(1, &aux, 1);
		i++;
	}
}

void	ft_init(int *array, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		array[i] = i;
		i++;
	}
}

void	ft_init_loop(int *pivote, int *pos, int *space_flag, int n)
{
	*pivote = -1;
	*pos = n - 1;
	*space_flag = 1;
}

int	search_pivote_pos(int *array_n, int *pos, int n)
{
	while (*pos >= 0)
	{
		if (array_n[*pos] < 10 - n + *pos)
		{
			write(1, ",", 1);
			return (*pos);
		}
		(*pos)--;
	}
	return (-1);
}

void	ft_print_combn(int n)
{
	int	array_n[10];
	int	pivote;
	int	pos;
	int	aux;
	int	space_flag;

	ft_init(array_n, n);
	space_flag = 0;
	while (1)
	{
		ft_print_numbers(array_n, n, space_flag);
		ft_init_loop(&pivote, &pos, &space_flag, n);
		pivote = search_pivote_pos(array_n, &pos, n);
		if (pivote == -1)
			break ;
		array_n[pivote]++;
		aux = pos;
		while (aux < n - 1)
		{
			array_n[aux + 1] = array_n[aux] + 1;
			aux++;
		}
	}
	return ;
}

/*
int	main(void)
{
	ft_print_combn(0);
	return (0);
}
*/
