/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-dieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 17:33:26 by dde-dieg          #+#    #+#             */
/*   Updated: 2019/01/15 19:25:43 by dde-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*tmp;
	int		ascii_val;
	int		i;

	ascii_val = 0;
	i = 0;
	tmp = str;
	while (*str)
	{
		ascii_val = (int)*str;
		if (ascii_val >= 65 && ascii_val <= 90)
		{
			tmp[i] = *str + 32;
		}
		i++;
		str++;
	}
	return (tmp);
}
