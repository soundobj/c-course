/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-dieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 10:41:07 by dde-dieg          #+#    #+#             */
/*   Updated: 2019/01/13 18:54:59 by dde-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "./ft_putchar.c"

void	print_row(int width, char chars[])
{
	int i;

	i = 0;
	while (i < width)
	{
		if (i == 0)
		{
			ft_putchar(chars[0]);
		}
		else if (i == width - 1)
		{
			ft_putchar(chars[2]);
		}
		else
		{
			ft_putchar(chars[1]);
		}
		i++;
	}
}

void	draw(int width, int total_columns, char chars[])
{
	int i;
	char row_chars[3];

	i = 1;
	while (i <= total_columns)
	{
		if (i == 1)
		{
			row_chars[0] = chars[0];
			row_chars[1] = chars[1];
			row_chars[2] = chars[2];
			print_row(width, row_chars);
		}
		else if (i == total_columns)
		{
			row_chars[0] = chars[0];
			row_chars[1] = chars[1];
			row_chars[2] = chars[2];
			print_row(width, row_chars);
		}
		else
		{
			row_chars[0] = chars[3];
			row_chars[1] = chars[4];
			row_chars[2] = chars[3];
			print_row(width, row_chars);
		}
		i++;
		ft_putchar('\n');
	}
}

int	rush(int x, int y)
{
	char	chars[5];

	chars[0] = 'o';
	chars[1] = '-';
	chars[2] = 'o';
	chars[3] = '|';
	chars[4] = ' ';
	printf("X:%d Y:%d\n", x, y);
	if (x == 0 && y == 0)
	{
		return(0);
	}
	if (x == 1 && y == 1)
	{
		ft_putchar(chars[0]);
		ft_putchar('\n');
		return(0);
	}
	draw(x, y, chars);
	return (0);
}

int		main(void)
{
	rush(1,1);
	ft_putchar('\n');
	printf("NEW TEST 1-3  \n");
	rush(1,3);
	ft_putchar('\n');
	printf("NEW TEST 3-3  \n");
	rush(3,3);
	ft_putchar('\n');
	printf("NEW TEST \n");
	rush(3,3);
	ft_putchar('\n');
	printf("NEW TEST 5-3 \n");
	rush(5,3);
	ft_putchar('\n');
	printf("NEW TEST 5-1 \n");
	rush(5,1);
	ft_putchar('\n');
}
