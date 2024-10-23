/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzyilma <kuzyilma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 12:53:57 by kuzyilma          #+#    #+#             */
/*   Updated: 2024/02/07 16:51:05 by kuzyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	hexawrite(unsigned char c)
{
	int		f;
	int		s;
	char	*hexa;
	int		k;

	k = c;
	hexa = "0123456789abcdef";
	f = k / 16;
	s = k % 16;
	write(1, &hexa[f], 1);
	write(1, &hexa[s], 1);
}

void	adresprinter(char *adres, long number)
{
	int	i;

	i = 15;
	while (number > 0 || i > -1)
	{
		if (adres[i] + number % 16 > '9')
			adres[i] = adres[i] + number % 16 + 39;
		else
			adres[i] = adres[i] + number % 16;
		number = number / 16;
		i--;
	}
	i = 0;
	while (adres[i])
	{
		write(1, &adres[i], 1);
		i++;
	}
	write(1, ": ", 2);
}

void	hexacharwriter(void *adres, int size)
{
	int				i;
	unsigned char	*f;
	unsigned char	*s;

	f = adres;
	s = adres + 1;
	i = 0;
	while (i < 8)
	{
		if (size > 0)
		{
			hexawrite(*f);
			hexawrite(*s);
			write(1, " ", 1);
		}
		else
			write(1, "     ", 5);
		f = f + 2;
		s = s + 2;
		i++;
		size += (-2);
	}
}

int	writeline(int tempsize, char *adres, unsigned long numberaddr, void *temp )
{
	int		k;
	char	*l;

	adresprinter(adres, numberaddr);
	hexacharwriter(temp, tempsize);
	k = 0;
	while (k < 16 && tempsize > 0)
	{
		l = temp;
		if ((*l <= 126 && *l >= 32))
			write(1, temp, 1);
		else
			write(1, ".", 1);
		temp = temp + 1;
		k++;
		tempsize--;
	}
	write(1, "\n", 1);
	return (tempsize);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned long	numberaddr;
	char			adres[17];
	int				tempsize;
	void			*temp;
	int				i;

	tempsize = size;
	temp = addr;
	adres[16] = '\0';
	numberaddr = (unsigned long)addr;
	while (tempsize > 0)
	{
		i = 0;
		while (i < 16)
		{
			adres[i] = '0';
			i++;
		}
		tempsize = writeline(tempsize, adres, numberaddr, temp);
		numberaddr += 16;
		temp = temp + 16;
	}
	return (addr);
}
