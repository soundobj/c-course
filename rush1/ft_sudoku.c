/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sud.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-dieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 21:54:14 by dde-dieg          #+#    #+#             */
/*   Updated: 2019/01/20 22:06:56 by dde-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_available(int puzzle[9][9], int row, int col, int num)
{
	int	rowstart;
	int	colstart;
	int	i;

	rowstart = (row / 3) * 3;
	colstart = (col / 3) * 3;
	i = 0;
	while (i < 9)
	{
		if (puzzle[row][i] == num)
			return (0);
		if (puzzle[i][col] == num)
			return (0);
		if (puzzle[rowstart + (i % 3)][colstart + (i / 3)] == num)
			return (0);
		i++;
	}
	return (1);
}

int		ft_sudoku(int puzzle[][9], int row, int col)
{
	int i;

	i = 0;
	if (row < 9 && col < 9)
	{
		if (puzzle[row][col] != 0)
		{
			if ((col + 1) < 9)
				return (ft_sudoku(puzzle, row, col + 1));
			else if ((row + 1) < 9)
				return (ft_sudoku(puzzle, row + 1, 0));
			else
				return (1);
		}
		else
		{
			while (i < 9)
			{
				if (ft_is_available(puzzle, row, col, i + 1))
				{
					puzzle[row][col] = i + 1;
					if ((col + 1) < 9)
					{
						if (ft_sudoku(puzzle, row, col + 1))
							return (1);
						else
							puzzle[row][col] = 0;
					}
					else if ((row + 1) < 9)
					{
						if (ft_sudoku(puzzle, row + 1, 0))
							return (1);
						else
							puzzle[row][col] = 0;
					}
					else
						return (1);
				}
				i++;
			}
		}
		return (0);
	}
	else
		return (1);
}
