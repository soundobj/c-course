/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-dieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/17 10:43:18 by dde-dieg          #+#    #+#             */
/*   Updated: 2019/01/17 11:48:51 by dde-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int len;
	int *ptr;
	int diff;

	len = 0;
	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
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
	*range = ptr;
	return (len);
}
