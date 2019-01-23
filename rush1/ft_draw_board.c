/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw_board.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-dieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 19:07:11 by dde-dieg          #+#    #+#             */
/*   Updated: 2019/01/20 20:03:33 by dde-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_putchar(char c);
int		ft_putstr(char *str);

int		ft_draw_board(int board[9][9])
{
	int i;
	int j;
	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			printf(" %d", board[i][j]);
			j++;
		}
		j = 0;
		printf("\n");
		i++;
	}
	return (0);
}
