/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_game_rules.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-dieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 20:05:30 by dde-dieg          #+#    #+#             */
/*   Updated: 2019/01/20 21:50:55 by dde-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_in_row(int board[9][9], int row, int num)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (board[row][i] == num)
			return (1);
	}
	return (0);
}

int		ft_is_in_col(int board[9][9], int col, int num)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (board[i][col] == num)
			return (1);
	}
	return (0);
}

int		ft_is_in_cell(int board[9][9], int row, int col, int num)
{
	int r;
	int c;

	r = 0;
	c = 0;
	while (r < 3)
	{
		while (c < 3)
		{
			if (board[r + row][c + col] == num)
				return (1);
		}
	}
	return (0);
}

int		ft_can_place(int board[9][9], int row, int col, int num)
{
	int is_in_row;
	int is_in_col;
	int is_in_grid;

	is_in_row = ft_is_in_row(board, row, num);
	is_in_col = ft_is_in_col(board, col, num);
	is_in_grid = ft_is_in_cell(board, row - row % 3, col - col % 3, num);
	return ((is_in_row + is_in_col + is_in_grid > 0) ? 0 : 1);
}

int		ft_get_coor(int board[9][9], int coor[2])
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			if (board[i][j] == i)
			{
				coor[0] = i;
				coor[1] = j;
				return (1);
			}
		}
	}
	return (0);
}
