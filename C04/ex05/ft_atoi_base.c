/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 23:03:33 by lupin             #+#    #+#             */
/*   Updated: 2026/03/19 21:45:54 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int	nbase;
	int	poniguay;

	nbase = 0;
	poniguay = 8;
	while (base[nbase] >= '0' && base[nbase] <= '9' && base[nbase])
		nbase++;
	if (nbase == 2)
	{
		if ((base[0] != '0' && base [0] != '1')
			|| (base[1] != '0' && base[1] != '1'))
			return (poniguay);
	}
	while ((base[nbase] >= 'A' && base[nbase] <= 'F' && base[nbase])
		|| (base[nbase] >= 'a' && base[nbase] <= 'f'))
		nbase++;
	if (base[nbase] == '\0' && (nbase == 2 || nbase == 10 || nbase == 16))
		return (nbase);
	return (poniguay);
}

int	duplicates(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (base[i] != '\0')
	{
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (0);
}

int	check_error(char *base)
{
	int	len_base;

	len_base = 0;
	while (base[len_base])
		len_base++;
	if (*base == '\0' || len_base == 1 || duplicates(base))
		return (1);
	return (0);
}

int	find_index(char c, char *base)
{
	int	index;

	index = 0;
	while (base[index] && base[index] != c)
		index++ ;
	if (base[index] == '\0')
		return (-1);
	return (index);
}

int	ft_atoi_base(char *str, char *base)
{
	int	n;
	int	sign;
	int	i;
	int	len_base;

	n = 0;
	sign = 1;
	i = 0;
	if (check_error(base))
		return (0);
	len_base = check_base(base);
	while (((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] && find_index(str[i], base) != -1)
	{
		n = (n * len_base) + find_index(str[i], base);
		i++;
	}
	return (n * sign);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	if (argc != 3)
		return (-1);
	printf("ft_atoi_base(%s, %s): %i\n", argv[1], argv[2], 
			ft_atoi_base(argv[1], argv[2]));
	return (0);
}*/