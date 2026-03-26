/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/08 17:28:29 by lupin             #+#    #+#             */
/*   Updated: 2026/03/08 17:45:14 by lupin            ###   ########.fr       */
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

void	print_row(int x, char init_char, char final_char, char space_char)
{
	ft_putchar(init_char);
	x--;
	if (x > 1)
	{
		space_loop(&x, space_char);
		ft_putchar(final_char);
	}
	else if (x == 1)
		ft_putchar(final_char);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	char	init_char;
	char	final_char;
	char	h_space;
	char	v_space;

	init_char = '/';
	final_char = '\\';
	h_space = '*';
	v_space = '*';
	if (x < 1 || y < 1)
		return ;
	print_row(x, init_char, final_char, h_space);
	--y;
	while (y > 1)
	{
		print_row(x, v_space, v_space, ' ');
		--y;
	}
	if (y == 1)
		print_row(x, final_char, init_char, h_space);
}
