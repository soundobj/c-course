/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-dieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 10:28:24 by dde-dieg          #+#    #+#             */
/*   Updated: 2019/01/20 22:27:00 by dde-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_draw_board(int board[9][9]);
int		ft_sudoku(int puzzle[][9], int row, int col);
int		ft_parse_input(char *values, int row, int board[9][9]);

int		main(int argc, char **argv)
{
	int board[9][9];
	int i;
	int j;

	if (argc == 10)
	{
		i = 0;
		j = 0;
		while ((++i) && i < 10)
		{
			if (!ft_parse_input(argv[i], j, board))
			{
				write(1, "Error\n", 6);
				return (0);
			}
			j++;
		}
		if (ft_sudoku(board, 0, 0))
			ft_draw_board(board);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
