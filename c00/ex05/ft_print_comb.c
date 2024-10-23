/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzyilma <kuzyilma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:28:22 by kuzyilma          #+#    #+#             */
/*   Updated: 2024/01/28 13:08:04 by kuzyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_numbers(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	first;
	char	second;
	char	third;

	first = '0';
	second = '1';
	third = '2';
	while (first <= '7')
	{
		while (second <= '8')
		{
			while (third <= '9')
			{
				print_numbers(first, second, third);
				third++;
			}
			second++;
			third = second + 1;
		}
		first++;
		second = first + 1;
		third = second + 1;
	}
}
