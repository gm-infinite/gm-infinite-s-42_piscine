/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzyilma <kuzyilma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:49:15 by kuzyilma          #+#    #+#             */
/*   Updated: 2024/02/05 17:41:08 by kuzyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	base_converter(int nbr, char *base, int size)
{
	long	temp;

	if (nbr == -2147483648)
	{
		ft_putchar('-');
		temp = nbr;
		base_converter(-(temp / size), base, size);
		ft_putchar(base[-(nbr % size)]);
	}
	else if (nbr == 0)
		return ;
	else if (nbr < 0)
	{
		ft_putchar('-');
		base_converter(((-1) * nbr), base, size);
	}
	else
	{
		base_converter((nbr / size), base, size);
		ft_putchar(base[nbr % size]);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return ;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+' )
			return ;
		while (base[j])
		{
			if (base[i] == base[j])
				return ;
			j++;
		}
		i++;
	}
	if (nbr == 0)
		ft_putchar(base[0]);
	base_converter(nbr, base, i);
}
