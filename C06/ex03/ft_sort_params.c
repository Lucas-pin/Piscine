/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 20:25:34 by lupin             #+#    #+#             */
/*   Updated: 2026/03/25 20:55:25 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_params(char **argv)
{
	while (*argv)
	{
		while (**argv)
		{
			write(1, *argv, 1);
			(*argv)++;
		}
		write(1, "\n", 1);
		argv++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	ft_swap(char **arr)
{
	char	*aux;

	aux = *arr;
	*arr = *(arr + 1);
	*(arr + 1) = aux;
}

int	main(int argc, char **argv)
{
	int	unsorted;

	unsorted = 1;
	argv++;
	if (argc == 1)
		return (0);
	while (unsorted)
	{
		unsorted = 0;
		while (*(argv + 1))
		{
			if (ft_strcmp(*argv, *(argv + 1)) > 0)
			{
				ft_swap(argv);
				unsorted = 1;
			}
			argv++;
		}
		argv = argv - (argc - 2);
	}
	ft_print_params(argv);
	return (0);
}
