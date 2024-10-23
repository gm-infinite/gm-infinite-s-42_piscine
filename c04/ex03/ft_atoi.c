/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzyilma <kuzyilma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 13:19:46 by kuzyilma          #+#    #+#             */
/*   Updated: 2024/02/05 15:48:45 by kuzyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strtoint(char *str, int length)
{
	int	i;

	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		i++;
	}
	if (i - length < 0)
		return (0);
	return ((str[i - length] - 48) + 10 * strtoint(str, length + 1));
}

int	ft_atoi(char *str)
{
	int	i;
	int	neg_amount;
	int	str_number;

	i = 0;
	neg_amount = 0;
	while (str[i] == ' ' || (str[i] < 14 && str[i] > 8))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg_amount++;
		i++;
	}
	if (str[i] < '0' || str[i] > '9')
		return (0);
	str_number = strtoint(&str[i], 1);
	if (neg_amount % 2 == 1)
		return ((-1) * str_number);
	return (str_number);
}
