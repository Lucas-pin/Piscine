/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 20:08:57 by lupin             #+#    #+#             */
/*   Updated: 2026/03/25 20:14:41 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;
	while (**argv)
	{
		write(1, *argv, 1);
		(*argv)++;
	}
	write(1, "\n", 1);
	return (0);
}
