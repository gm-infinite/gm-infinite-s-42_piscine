/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzyilma <kuzyilma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:28:22 by kuzyilma          #+#    #+#             */
/*   Updated: 2024/01/28 13:08:07 by kuzyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_recursive(int x)
{
	if (x == 0)
	{
		return ;
	}
	ft_recursive(x / 10);
	ft_putchar('0' + x % 10);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb == 0)
	{
		ft_putchar('0');
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_recursive((-1) * nb);
	}
	else
	{
		ft_recursive(nb);
	}
}
