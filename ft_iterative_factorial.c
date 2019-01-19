/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interactive_factorial.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-dieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 09:31:42 by dde-dieg          #+#    #+#             */
/*   Updated: 2019/01/12 14:29:43 by dde-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	factorial;
	int	i;

	factorial = 1;
	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	else
	{
		while (i < nb)
		{
			factorial *= i;
			i++;
		}
		return (factorial);
	}
}
