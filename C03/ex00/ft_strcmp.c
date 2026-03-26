/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:20:32 by lupin             #+#    #+#             */
/*   Updated: 2026/03/12 19:31:22 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*
#include <stdio.h>
int	main()
{
	char s1[10] = "Hola";
	char s2[10] = "Hola";

	printf("Hola vs Hola: %i\n", ft_strcmp(s1, s2));
	printf("Hola vs hola: %i\n", ft_strcmp(s1, "hola"));
	printf("Holaa vs Hola: %i\n", ft_strcmp("Holaa", s2));
}*/