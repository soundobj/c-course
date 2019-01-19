/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-dieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 19:32:54 by dde-dieg          #+#    #+#             */
/*   Updated: 2019/01/15 21:36:12 by dde-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int i;
	int upper;

	i = 0;
	upper = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= '0' && str[i] <= '9') ||
			(str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (upper && (str[i] >= 'a' && str[i] <= 'z'))
			{
				printf("in upper %c \n" , str[i]);
				str[i] = str[i] - 32;
			}
			else if (!upper && (str[i] >= 'A' && str[i] <= 'Z'))
			{
				printf("in lower %c \n" , str[i]);
				str[i] = str[i] + 32;
			}
			upper = 0;
		}
		else
			upper = 1;
		i++;
	}
	return (str);
}
