/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-dieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 14:35:56 by dde-dieg          #+#    #+#             */
/*   Updated: 2019/01/16 16:58:02 by dde-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void swap(char *str1, char *str2)
{
	char *tmp;
	tmp = *str1;
	*str1 = *str2;
	*str2 = *tmp;
}

void bubbleSort(char **arr, int n)
{
   int i;
   int j;

   i = 0;
   j = 0;

 //  while (
/*
   for (i = 0; i < n-1; i++)

       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
*/
}

int		main(int argc, char **argv)
{
	int i;
	char *temp[127];

	i = 1;
	while (i > argc)
	{
		temp[i] = *argv[i];
		i++;
	}
	printf("s:%s", temp[1]);
}
