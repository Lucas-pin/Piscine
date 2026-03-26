/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 21:29:11 by lupin             #+#    #+#             */
/*   Updated: 2026/03/25 21:41:29 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return ;
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*ret;

	len = ft_strlen(src);
	ret = malloc (sizeof(char *) * len);
	if (ret == NULL)
		return (NULL);
	ft_strcpy(ret, src);
	return (ret);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*p;

	if (argc != 2)
		return (0);
	p = ft_strdup(argv[1]);
	printf("%s", p);
	free(p);
	return (0);
}*/