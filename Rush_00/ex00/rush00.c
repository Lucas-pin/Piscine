/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/07 09:57:59 by lupin             #+#    #+#             */
/*   Updated: 2026/03/08 17:45:06 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	space_loop(int *size, char c)
{
	while (*size > 1)
	{
		ft_putchar(c);
		*size = *size -1;
	}
}

void	print_row(int x, char c, char space_char)
{
	ft_putchar(c);
	x--;
	if (x > 1)
	{
		space_loop(&x, space_char);
		ft_putchar(c);
	}
	else if (x == 1)
		ft_putchar(c);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	char	x_y_char;
	char	h_space;
	char	v_space;

	x_y_char = 'o';
	h_space = '-';
	v_space = '|';
	if (x < 1 || y < 1)
		return ;
	print_row(x, x_y_char, h_space);
	--y;
	while (y > 1)
	{
		print_row(x, v_space, ' ');
		--y;
	}
	if (y == 1)
		print_row(x, x_y_char, h_space);
}
