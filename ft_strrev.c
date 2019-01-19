/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-dieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 13:36:10 by dde-dieg          #+#    #+#             */
/*   Updated: 2019/01/11 13:36:16 by dde-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char	*ft_strrev(char *str)
{
	int		i;
	int		string_length;
	char	temp;

	i = 0;
	string_length = ft_strlen(str) - 1;
	while (string_length - 1 > i)
	{
		temp = str[i];
		str[i] = str[string_length];
		str[string_length] = temp;
		string_length--;
		i++;
	}
	return (str);
}
