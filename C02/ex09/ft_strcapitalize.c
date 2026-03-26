/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 20:38:41 by lupin             #+#    #+#             */
/*   Updated: 2026/03/12 18:16:22 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alpha(char c)
{
	if ((c < 'A' || c > 'Z') && ((c < 'a' || c > 'z')))
		return (0);
	return (1);
}

int	ft_is_uppercase(char c)
{
	if (c < 'A' || c > 'Z')
		return (0);
	return (1);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (str);
	while (str[i] != '\0')
	{
		if (ft_is_alpha(str[i]) && ft_is_uppercase(str[i]))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strchr(char *str)
{
	if (!str)
		return (str);
	while (*str)
	{
		if (!ft_is_alpha(*str) && (*str < '0' || *str > '9'))
			return (str);
		str++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	char	*aux;

	aux = str;
	if (!str)
		return (str);
	ft_strlowcase(str);
	while (*str)
	{
		if (ft_is_alpha(*str))
			*str = *str - 32;
		str = ft_strchr(str);
		if (*str != '\0')
			str++;
	}
	return (aux);
}

#include <stdio.h>
int    main(void)
{
    char p1[500] = "salut? 42mots quarante-deux; cinquante+et+un";

    printf("ret: %s\n", ft_strcapitalize(p1));
    return 0;
}
