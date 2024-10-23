/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzyilma <kuzyilma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 08:46:49 by kuzyilma          #+#    #+#             */
/*   Updated: 2024/02/13 09:59:24 by kuzyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

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

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	n;

	n = 0;
	while (par[n].str != 0)
	{
		ft_putstr(par[n].str);
		write(1, "\n", 1);
		ft_putnbr(par[n].size);
		write(1, "\n", 1);
		ft_putstr(par[n].copy);
		write(1, "\n", 1);
		n++;
	}
}
