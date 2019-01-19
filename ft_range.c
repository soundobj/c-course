/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-dieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 21:55:04 by dde-dieg          #+#    #+#             */
/*   Updated: 2019/01/17 10:12:29 by dde-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int len;
	int *ptr;
	int diff;

	len = 0;
	if (min >= max)
		return (NULL);
	diff = max - min;
	if (diff < 0)
		diff = diff * (-1);
	ptr = malloc(sizeof(int) * diff);
	while (len < diff)
	{
		ptr[len] = min;
		min++;
		len++;
	}
	return (ptr);
}
