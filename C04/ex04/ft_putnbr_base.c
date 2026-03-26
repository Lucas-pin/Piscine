/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 21:34:50 by lupin             #+#    #+#             */
/*   Updated: 2026/03/18 23:07:36 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
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

	len_base = ft_strlen(base);
	if (*base == '\0' || len_base == 1 || duplicates(base))
		return (1);
	return (0);
}

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

void	ft_putnbr_base(int nbr, char *base)
{
	long	lnbr;
	int		nbase;
	char	mod;

	lnbr = nbr;
	if (check_error(base))
		return ;
	nbase = check_base(base);
	if (lnbr < 0)
	{
		write(1, "-", 1);
		lnbr = -lnbr;
	}
	if (lnbr >= nbase)
		ft_putnbr_base(lnbr / nbase, base);
	mod = base[lnbr % nbase];
	write(1, &mod, 1);
}

/*
#include <stdio.h>

int	main(void)
{
	ft_putnbr_base(123, "01");
	printf("\n");
	ft_putnbr_base(123, "0123456789");
	printf("\n");
	ft_putnbr_base(123, "0123456789abcdef");
	printf("\n");
	ft_putnbr_base(40, "poneyvif");
	return 0;
}*/