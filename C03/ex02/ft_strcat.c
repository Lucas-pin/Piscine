/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 19:43:18 by lupin             #+#    #+#             */
/*   Updated: 2026/03/16 18:06:13 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*aux;

	aux = dest;
	if (dest == NULL || src == NULL)
		return (dest);
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (aux);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	src[50] = "perrito malvado";
	char	dest[50] = "Hola ";
	char	src1[50] = "perrito malvado";
	char	dest1[50] = "Hola ";


	printf("strcat(%s, %s): %s\n", dest, src, strcat(dest, src));
	printf("ft_strcat(%s, %s): %s\n", dest1, src1, ft_strcat(dest1, src1));
}*/
