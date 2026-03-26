/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 21:05:40 by lupin             #+#    #+#             */
/*   Updated: 2026/03/18 21:32:11 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isspace(char *str)
{
	if ((*str >= 9 && *str <= 13) || *str == 32)
		return (1);
	return (0);
}

int	ft_isnumeric(char *str)
{
	if (*str >= '0' && *str <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	n;
	int	sign;

	n = 0;
	sign = 1;
	while (ft_isspace(str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = sign * -1;
		str++;
	}
	if (!ft_isnumeric(str))
		return (0);
	while (ft_isnumeric(str))
	{
		n = (n * 10) + (*str - '0');
		str++;
	}
	return (n * sign);
}

/*
#include <stdio.h>
int	main(void)
{
	char	a[50] = "++++---12";
	char	b[50] = "++++---12";
	char	c[50] = "     ++++---12";
	char	d[50] = "   +-45465kjhkjh4564";
	char	e[50] = "lñkdlñs12";

	printf("ft_atoi(%s): %d\n", a, ft_atoi(a));
	printf("ft_atoi(%s): %d\n", b, ft_atoi(b));
	printf("ft_atoi(%s): %d\n", c, ft_atoi(c));
	printf("ft_atoi(%s): %d\n", d, ft_atoi(d));
	printf("ft_atoi(%s): %d\n", e, ft_atoi(e));
	return 0;
}
*/