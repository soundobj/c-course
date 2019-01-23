/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_imput.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-dieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 22:15:59 by dde-dieg          #+#    #+#             */
/*   Updated: 2019/01/20 22:28:05 by dde-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_parse_input(char *values, int row, int board[9][9])
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (values[i] == '.')
		{
			board[row][i] = 0;
		}
		else if (values[i] >= '0' && values[i] <= '9')
		{
			board[row][i] = values[i] - '0';
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (1);
}
