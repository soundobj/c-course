/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-dieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 11:56:59 by dde-dieg          #+#    #+#             */
/*   Updated: 2019/01/17 16:40:39 by dde-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*res;
	int		i;
	int		mem_size;
	char	*new_line;

	new_line = "\n";
	if (!argc)
		return (NULL);
	mem_size = argc + 1;
	i = 1;
	while (i < argc)
	{
		mem_size += ft_strlen(argv[i]);
		i++;
	}
	res = (char*)malloc(sizeof(*res) * mem_size);
	i = 1;
	while (i < argc)
	{
		res = ft_strcat(res, argv[i]);
		if ((i + 1) < argc)
			res = ft_strcat(res, new_line);
		i++;
	}
	return (res);
}
