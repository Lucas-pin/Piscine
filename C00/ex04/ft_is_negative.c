/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/04 21:15:08 by lupin             #+#    #+#             */
/*   Updated: 2026/03/04 21:20:59 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else
		write(1, "N", 1);
	return ;
}

/*
#include <stdio.h>
int	main(void)
{
	printf("Probamos ft_is_negative(-1)\n");
	ft_is_negative(-1);
	printf("\nProbamos ft_is_negative(0)\n");
	ft_is_negative(0);
	printf("\nProbamos ft_is_negative(1)\n");
	ft_is_negative(1);
}
*/