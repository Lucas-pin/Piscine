/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 19:14:08 by lupin             #+#    #+#             */
/*   Updated: 2026/03/10 19:24:09 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if ((*str < 'A' || *str > 'Z') && ((*str < 'a' || *str > 'z')))
			return (0);
		str++;
	}
	return (1);
}

/*
#include <stdio.h>
int    main(void)
{
    char p1[5] = "Ho5la";

    printf("ret: %i\n", ft_str_is_alpha(p1));
    return 0;
}*/