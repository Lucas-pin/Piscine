/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 10:26:01 by lupin             #+#    #+#             */
/*   Updated: 2026/03/08 19:16:41 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int x, int y);

int	ft_haschar(char *str)
{
	int	sign_counter;

	sign_counter = 0;
	while (*str)
	{
		if ((*str < '0' || *str > '9') && (*str != '-' && *str != '+'))
			return (1);
		if (*str == '-' || *str == '+')
			sign_counter++;
		str++;
	}
	if (sign_counter > 1)
		return (1);
	return (0);
}

long	ft_atoi(char *str)
{
	long	nbr;
	int		sign;

	nbr = 0;
	sign = 1;
	if (ft_haschar(str) == 1)
		return (nbr);
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str)
	{
		nbr = nbr * 10 + (*str - '0');
		str++;
	}
	return (nbr * sign);
}

int	main(int argc, char **argv)
{
	long	x;
	long	y;

	if (argc != 3)
		return (-1);
	argv++;
	x = ft_atoi(*argv);
	argv++;
	y = ft_atoi(*argv);
	if (x < 0 || x > 2147483647 || y < 0 || y > 2147483647)
		return (-1);
	rush((int) x, (int) y);
	return (0);
}
