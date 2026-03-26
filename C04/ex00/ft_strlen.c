/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lupin <lupin@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/17 22:42:32 by lupin             #+#    #+#             */
/*   Updated: 2026/03/17 22:45:00 by lupin            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
		length++;
	return (length);
}

/*
#include <stdio.h>
int main(void)
{
	char	*str;

	str = "Hello, world!";
	printf("Length of '%s' is: %d\n", str, ft_strlen(str));
	return (0);
}*/
