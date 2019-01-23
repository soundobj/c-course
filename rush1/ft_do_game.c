/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_game.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-dieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/20 20:49:25 by dde-dieg          #+#    #+#             */
/*   Updated: 2019/01/20 21:49:49 by dde-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_get_coor(int board[9][9], int coor[2]);
int		ft_can_place(int board[9][9], int row, int col, int num);

int		ft_do_game(int board[9][9])
{
	int rc[2];
	int i;

	i = 0;
	ft_get_coor(board, rc);
	if (rc[0] == 9 && rc[1] == 9)
		return (1);
	ft_get_coor(board, rc);
	while (i < 9)
	{
		if (ft_can_place(board, rc[0], rc[1], i))
		{
			board[rc[0]][rc[1]] = i;
			if (ft_do_game(board))
				return (1);
			board[rc[0]][rc[1]] = 0;
		}
	}
	return (0);
}
