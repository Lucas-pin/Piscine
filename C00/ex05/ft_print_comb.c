/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 18:16:33 by lupin             #+#    #+#             */
/*   Updated: 2026/03/07 21:32:01 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_init(int *cent, int *dec, int *unit)
{
	*cent = 0;
	*dec = 0;
	*unit = 0;
}

void	print_numbers(int cent, int dec, int unit)
{
	char	c_cent;
	char	c_dec;
	char	c_unit;

	c_cent = cent + '0';
	c_dec = dec + '0';
	c_unit = unit + '0';
	write(1, &c_cent, 1);
	write(1, &c_dec, 1);
	write(1, &c_unit, 1);
	if ((cent * 100 + dec * 10 + unit) < 789)
		write(1, ", ", 2);
	return ;
}

void	ft_print_comb(void)
{
	int	cent;
	int	dec;
	int	unit;

	ft_init(&cent, &dec, &unit);
	while (cent <= 7)
	{
		dec = cent + 1;
		while (dec <= 8)
		{
			unit = dec + 1;
			while (unit <= 9)
			{
				print_numbers(cent, dec, unit);
				unit++;
			}
			dec++;
		}
		cent++;
	}
	return ;
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}*/
