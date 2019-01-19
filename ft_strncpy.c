/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-dieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 20:12:21 by dde-dieg          #+#    #+#             */
/*   Updated: 2019/01/15 09:11:14 by dde-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	*tmp;

	tmp = dest;
	while (n)
	{
		if ((*tmp = *src) != 0)
			src++;
		tmp++;
		n--;
	}
	return (dest);
}
