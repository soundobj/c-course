/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-dieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 11:09:19 by dde-dieg          #+#    #+#             */
/*   Updated: 2019/01/18 11:28:02 by dde-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_is_letter(char c)
{
	return (c != '\t' && c != ' ' && c != '\n') ? 1 : 0;
}

int		ft_count_words(char *str)
{
	int count;
	int i;

	i = 0;
	count = 0;
	if (str[0] && ft_is_letter(str[0]))
	{
		count++;
		i++;
	}
	while (str[i] != '\0')
	{
		if (i > 0 && ft_is_letter(str[i]) && !ft_is_letter(str[i - 1]))
			count++;
		i++;
	}
	return (count);
}

int		ft_wrd_l(char *str, int i)
{
	int count;

	count = 0;
	while (!ft_is_letter(str[i]) && str[i])
	{
		count++;
		i++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	char	**res;
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	if ((res = malloc(sizeof(char*) * (ft_count_words(str) + 1))) == NULL)
		return (NULL);
	while (str[i])
	{
		while ((!ft_is_letter(str[i])) && str[i])
			i++;
		if (str[i])
		{
			count = 0;
			if ((res[j] = malloc(sizeof(char) * ft_wrd_l(str, i) + 1)) == NULL)
				return (NULL);
			while (ft_is_letter(str[i]) && str[i])
				res[j][count++] = str[i++];
			res[j++][count] = '\0';
		}
	}
	res[j] = NULL;
	return (res);
}
