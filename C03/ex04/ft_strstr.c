/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/16 18:11:13 by lupin             #+#    #+#             */
/*   Updated: 2026/03/16 21:02:17 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *str, char *to_find)
{
	while (*str != '\0' && *to_find != '\0')
	{
		if (*str != *to_find)
			return (-1);
		str++;
		to_find++;
	}
	if (*to_find != '\0')
		return (-1);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (str == NULL || *str == '\0')
		return (str);
	if (to_find == NULL || *to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find && !ft_strcmp(str, to_find))
			return (str);
		str++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str[50] = "Hola";
	char	to_find[5] = "abd";
	
	//to_find = NULL;

	printf("strstr(%s, %s): %s\n", str, to_find, strstr(str, to_find));
	printf("ft_strstr(%s, %s): %s\n", str, to_find, ft_strstr(str, to_find));
}*/
