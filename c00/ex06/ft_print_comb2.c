/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzyilma <kuzyilma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:28:22 by kuzyilma          #+#    #+#             */
/*   Updated: 2024/01/29 10:23:52 by kuzyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	print_number(int x, int y)
{
	ft_putchar ('0' + (x / 10));
	ft_putchar ('0' + (x % 10));
	ft_putchar (' ');
	ft_putchar ('0' + (y / 10));
	ft_putchar ('0' + (y % 10));
	if (x != 98)
	{
		ft_putchar (',');
		ft_putchar (' ');
	}
}

void	ft_print_comb2(void)
{
	int	number1;
	int	number2;

	number1 = 0;
	number2 = 1;
	while (number1 <= 98)
	{
		while (number2 <= 99)
		{
			print_number(number1, number2);
			number2++;
		}
		number1++;
		number2 = number1 + 1;
	}
}
