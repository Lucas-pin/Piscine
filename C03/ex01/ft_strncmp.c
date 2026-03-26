/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:31:57 by lupin             #+#    #+#             */
/*   Updated: 2026/03/12 19:42:44 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (*s1 && *s2 && n > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	if (*s1 == '\0' || *s2 == '\0')
		return (*s1 - *s2);
	return (0);
}

/*
#include <stdio.h>
int	main()
{
	char s1[10] = "Hola";
	char s2[10] = "";

	printf("Hola vs Hola (2): %i\n", ft_strncmp(s1, s2, 2));
	printf("Hola vs HolA (3): %i\n", ft_strncmp(s1, "HolA", 3));
	printf("Holaa vs Hola: %i\n", ft_strncmp("Holaa", s2, 4));
}*/