/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 21:02:55 by lupin             #+#    #+#             */
/*   Updated: 2026/03/17 18:35:47 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *s1)
{
	unsigned int	len;

	len = 0;
	while (s1[len] != '\0')
		len++;
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	dest_len;
	unsigned int	i;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (src == NULL || *src == '\0' || dest == NULL)
		return (dest_len + src_len);
	if (size > 0 && dest_len < size)
	{
		while (*dest)
			dest++;
		while (*src && i < (size - dest_len - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
		return (dest_len + src_len);
	}
	return (src_len + size);
}

/*
int	main(void)
{
	char	dest[50] = "Hola ";
	char	src[50] = "Mundo";
	char	dest2[10] = "Hi ";
	char	src2[50] = "World";
	char	dest3[20];
	unsigned int ret;

	printf("=== TEST 1: Concatenación básica ===\n");
	printf("dest: '%s'\n", dest);
	printf("src: '%s'\n", src);
	ret = ft_strlcat(dest, src, 50);
	printf("Después de ft_strlcat: '%s'\n", dest);
	printf("Retornado: %u\n\n", ret);

	printf("=== TEST 2: Buffer pequeño (tamaño limitado) ===\n");
	printf("dest2: '%s' (tamaño buffer: 10)\n", dest2);
	printf("src2: '%s'\n", src2);
	printf("Intentando concatenar con size=10...\n");
	ret = ft_strlcat(dest2, src2, 10);
	printf("Después de ft_strlcat: '%s'\n", dest2);
	printf("Retornado: %u (len(dest)+len(src) = 3+5 = 8)\n\n", ret);

	printf("=== TEST 3: String source vacío ===\n");
	strcpy(dest3, "Test");
	printf("dest3: '%s'\n", dest3);
	ret = ft_strlcat(dest3, "", 20);
	printf("Después de concatenar string vacío: '%s'\n", dest3);
	printf("Retornado: %u\n\n", ret);

	printf("=== TEST 4: Verificar que no hay desbordamiento ===\n");
	char	dest4[5] = "ab";
	char	src4[10] = "cdef";
	printf("dest4: '%s' (buffer size: 5)\n", dest4);
	printf("src4: '%s'\n", src4);
	ret = ft_strlcat(dest4, src4, 5);
	printf("Después de ft_strlcat con size=5: '%s'\n", dest4);
	printf("Retornado: %u\n", ret);

	return (0);
}
*/