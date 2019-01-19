/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-dieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 10:37:04 by dde-dieg          #+#    #+#             */
/*   Updated: 2019/01/11 22:59:00 by dde-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

int		ft_strlen(char *str)
{
	const	char *anchor;

	anchor = str;
	while (*str)
	{
		str++;
	}
	return (str - anchor);
}

void	ft_putstr(char *str)
{
	int i;
	int strlen;

	i = 0;
	strlen = ft_strlen(str);
	while (i < strlen)
	{
		ft_putchar(str[i]);
		i++;
	}
}
