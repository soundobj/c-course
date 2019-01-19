/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-dieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 14:07:59 by dde-dieg          #+#    #+#             */
/*   Updated: 2019/01/18 14:39:47 by dde-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *i, int *b)
{
	int temp;

	temp = *i;
	*i = *b;
	*b = temp;
}

void	ft_bubble_sort(int arr[], int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < n - 1)
	{
		while (j < n - i - 1)
		{
			if (arr[j] > arr[j + 1])
				ft_swap(&arr[j], &arr[j + 1]);
			j++;
		}
		i++;
	}
}

int		ft_antidote(int i, int j, int k)
{
	int	numbers[3];

	numbers[0] = i;
	numbers[1] = j;
	numbers[2] = k;
	ft_bubble_sort(numbers, 3);
	return (numbers[1]);
}
