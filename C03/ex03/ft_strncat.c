/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 18:05:31 by lupin             #+#    #+#             */
/*   Updated: 2026/03/16 18:10:48 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*aux;

	aux = dest;
	if (dest == NULL || src == NULL)
		return (dest);
	while (*dest)
		dest++;
	while (*src && nb > 0)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
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


	printf("strcat(%s, %s): %s\n", dest, src, strncat(dest, src, 4));
	printf("ft_strcat(%s, %s): %s\n", dest1, src1, ft_strncat(dest1, src1, 4));
}*/
