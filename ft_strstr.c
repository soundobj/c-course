/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-dieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 09:44:53 by dde-dieg          #+#    #+#             */
/*   Updated: 2019/01/15 11:41:01 by dde-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlcmp(char *str, char *str1)
{
	while (*str && *str1)
	{
		if (*str != *str1)
			return (0);
		str++;
		str1++;
	}
	return (*str1 == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find && ft_strlcmp(str, to_find))
			return (str);
		str++;
	}
	return (0);
}
