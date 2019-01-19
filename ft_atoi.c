/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dde-dieg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 13:53:15 by dde-dieg          #+#    #+#             */
/*   Updated: 2019/01/14 19:41:15 by dde-dieg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		fc_is_char_number(char c)
{
	return (c >= '0' && c <= '9') ? 1 : 0;
}

int		fc_is_special_char(char c)
{
	if (c == '\t'
			|| c == '\n'
			|| c == '\v'
			|| c == '\f'
			|| c == '\r'
			|| c == ' '
			|| c == '+')
	{
		return (1);
	}
	return (0);
}

int		fc_add_number_sign(int number, char sign)
{
	return (sign == '-' ? -1 * number : number);
}

int		ft_atoi(char *str)
{
	int number;
	int i;

	number = 0;
	i = 0;
	if (str[0] == '-')
		i++;
	while (str[i] != '\0')
	{
		if (fc_is_special_char(str[i]))
		{
			i++;
			continue;
		}
		if (!fc_is_char_number(str[i]))
			return (fc_add_number_sign(number, str[0]));
		number = number * 10 + str[i] - '0';
		i++;
	}
	return (fc_add_number_sign(number, str[0]));
}
