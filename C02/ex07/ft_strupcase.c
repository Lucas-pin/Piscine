/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 20:07:17 by lupin             #+#    #+#             */
/*   Updated: 2026/03/12 18:02:38 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_alpha(char c)
{
	if ((c < 'A' || c > 'Z') && ((c < 'a' || c > 'z')))
		return (0);
	return (1);
}

int	ft_is_lowercase(char c)
{
	if (c < 'a' || c > 'z')
		return (0);
	return (1);
}

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (str);
	while (str[i] != '\0')
	{
		if (ft_is_alpha(str[i]) && ft_is_lowercase(str[i]))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

#include <stdio.h>
int    main(void)
{
    char p1[50] = "jhsakjdhak";

    printf("ret: %s\n", ft_strupcase(p1));
    return 0;
}
