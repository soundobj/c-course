/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-dieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 10:19:35 by dde-dieg          #+#    #+#             */
/*   Updated: 2019/01/11 10:19:40 by dde-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		temp_a;
	int		temp_b;

	a = *a;
	b = *b;
	*a = temp_a / temp_b;
	*b = temp_a % temp_b;
}
