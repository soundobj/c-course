/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-dieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/13 10:41:07 by dde-dieg          #+#    #+#             */
/*   Updated: 2019/01/13 19:51:48 by dde-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_putchar(char c);

void	print_row(int width, char start, char middle, char end)
{
	int i;

	i = 0;
	while (i < width)
	{
		if (i == 0)
		{
			ft_putchar(start);
		}
		else if (i == width - 1)
		{
			ft_putchar(end);
		}
		else
		{
			ft_putchar(middle);
		}
		i++;
	}
}

void	draw(int width, int total_columns, char chars[])
{
	int i;

	i = 1;
	while (i <= total_columns)
	{
		if (i == 1)
		{
			print_row(width, chars[0], chars[1], chars[2]);
		}
		else if (i == total_columns)
		{
			print_row(width, chars[6], chars[7], chars[8]);
		}
		else
		{
			print_row(width, chars[3], chars[4], chars[5]);
		}
		i++;
		ft_putchar('\n');
	}
}

int		rush(int x, int y)
{
	char	chars[9];

	chars[0] = 'o';
	chars[1] = '-';
	chars[2] = 'o';
	chars[3] = '|';
	chars[4] = ' ';
	chars[5] = '|';
	chars[6] = 'o';
	chars[7] = '-';
	chars[8] = 'o';
	if (x == 0 && y == 0)
	{
		return (0);
	}
	if (x == 1 && y == 1)
	{
		ft_putchar(chars[0]);
		ft_putchar('\n');
		return (0);
	}
	draw(x, y, chars);
	return (0);
}

int		main(void)
{
	rush(1, 1);
	ft_putchar('\n');
	printf("NEW TEST 1-3  \n");
	rush(1, 3);
	ft_putchar('\n');
	printf("NEW TEST 3-3  \n");
	rush(3, 3);
	ft_putchar('\n');
	printf("NEW TEST 5-3 \n");
	rush(5, 3);
	ft_putchar('\n');
	printf("NEW TEST 5-1 \n");
	rush(5, 1);
	ft_putchar('\n');
}
