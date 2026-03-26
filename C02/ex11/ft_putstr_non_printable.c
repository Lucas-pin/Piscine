/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 21:21:28 by lupin             #+#    #+#             */
/*   Updated: 2026/03/11 21:31:09 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	if (*str < 32 || *str > 126)
		return (0);
	return (1);
}

void	ft_print_hexa(char *str)
{
	char	div;
	char	mod;

	div = (*str / 16) + '0';
	mod = (*str % 16);
	if (mod < 10)
		mod = mod + '0';
	else
		mod = mod + 87;
	write(1, "\\", 1);
	write(1, &div, 1);
	write(1, &mod, 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (!ft_is_printable(str))
			ft_print_hexa(str);
		else
			write(1, str, 1);
		str++;
	}
	return ;
}


#include <stdio.h>

int	main(void)
{
	char	arr[50] = "Coucou	tu vas bien ?";

	ft_putstr_non_printable(arr);
}
