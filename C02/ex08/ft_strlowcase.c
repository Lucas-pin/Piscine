/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 20:36:06 by lupin             #+#    #+#             */
/*   Updated: 2026/03/10 20:38:04 by lupin            ###   ########.fr       */
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

/*
#include <stdio.h>
int    main(void)
{
    char p1[50] = "JHSJDHA";

    printf("ret: %s\n", ft_strupcase(p1));
    return 0;
}
*/