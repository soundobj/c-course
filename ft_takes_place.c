/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-dieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 13:13:42 by dde-dieg          #+#    #+#             */
/*   Updated: 2019/01/18 13:50:21 by dde-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	char *am;
	char *pm;
	char *template;

	template = "THE FOLLOWING TAKES PLACE BETWEEN %d %s AND %d %s\n";
	am = "A.M.";
	pm = "P.M.";
	if (hour > 24)
		return ;
	if (hour == 11)
		printf(template, 11, am, 12, pm);
	if (hour == 23)
		printf(template, 23, pm, 00, am);
	if (hour > 0 && hour < 11)
		printf(template, hour, am, hour + 1, am);
	if (hour == 24)
		printf(template, 0, am, 1, am);
	if (hour > 11 && hour < 23)
		printf(template, hour, pm, hour + 1, pm);
}
