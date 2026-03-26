/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 19:45:47 by lupin             #+#    #+#             */
/*   Updated: 2026/03/07 21:32:33 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_init(int *dec, int *unit)
{
	*dec = 0;
	*unit = 0;
}

void	print_pairs(char dec, char unit)
{
	write(1, &dec, 1);
	write(1, &unit, 1);
}

void	print_numbers(int f_pair, int s_pair)
{
	print_pairs((f_pair / 10) + '0', (f_pair % 10) + '0');
	write(1, " ", 1);
	print_pairs((s_pair / 10) + '0', (s_pair % 10) + '0');
	if (!(f_pair == 98 && s_pair == 99))
		write(1, ", ", 2);
	return ;
}

void	ft_print_comb2(void)
{
	int	f_pair;
	int	s_pair;

	ft_init(&f_pair, &s_pair);
	while (f_pair < 98)
	{
		while (s_pair < 99)
		{
			s_pair++;
			print_numbers(f_pair, s_pair);
		}
		f_pair++;
		s_pair = f_pair + 1;
		print_numbers(f_pair, s_pair);
	}
	return ;
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
