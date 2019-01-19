/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-dieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 20:31:56 by dde-dieg          #+#    #+#             */
/*   Updated: 2019/01/09 20:31:59 by dde-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_putchar_multiple(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	return (0);
}

int		ft_putchar_multiple_add_comma(char a, char b, char c)
{
	ft_putchar_multiple(a, b, c);
	ft_putchar(',');
	ft_putchar(' ');
	return (0);
}

void	ft_print_comb(void)
{
	char i;
	char j;
	char k;

	i = '0';
	while (i <= '9')
	{
		j = i + 1;
		while (j <= '9')
		{
			k = j + 1;
			while (k <= '9')
			{
				(i == '7' && j == '8' && k == '9')
					? ft_putchar_multiple(i, j, k)
					: ft_putchar_multiple_add_comma(i, j, k);
				k = k + 1;
			}
			j = j + 1;
		}
		i = i + 1;
	}
}
