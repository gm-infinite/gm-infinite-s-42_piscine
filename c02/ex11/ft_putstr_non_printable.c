/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzyilma <kuzyilma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:53:57 by kuzyilma          #+#    #+#             */
/*   Updated: 2024/02/05 12:33:52 by kuzyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	hexawrite(unsigned char c, char *hexa)
{
	int	f;
	int	s;

	f = c / 16;
	s = c % 16;
	ft_putchar(92);
	ft_putchar(hexa[f]);
	ft_putchar(hexa[s]);
}

void	ft_putstr_non_printable(char *str)
{
	char			*hex;
	int				i;
	unsigned char	k;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (str[i] < 32)
		{
			k = str[i];
			hexawrite(k, hex);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
