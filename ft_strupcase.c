/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-dieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 16:37:26 by dde-dieg          #+#    #+#             */
/*   Updated: 2019/01/15 17:28:58 by dde-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
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
		if (ascii_val >= 97 && ascii_val <= 122)
		{
			tmp[i] = *str - 32;
		}
		i++;
		str++;
	}
	return (tmp);
}
