/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzyilma <kuzyilma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:28:22 by kuzyilma          #+#    #+#             */
/*   Updated: 2024/01/29 11:22:55 by kuzyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	is_max(char *d, int n)
{
	int	i;
	int	k;

	k = 0;
	i = 0;
	while (i < n)
	{
		if (d[n - 1 - i] == '9' - i)
		{
			k++;
		}
		i++;
	}
	return (k);
}

void	writeout(char *d, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(d[i]);
		i++;
	}
	if (is_max(d, n) != n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	increment(char *d, int n, int count)
{
	int	k;

	k = 0;
	if (n == 0)
		return ;
	else if (d[n - 1] == '0' + count && d[n - 2] == '0' + count - 1)
	{
		increment(d, n - 1, count - 1);
		k++;
	}
	else if (d[n - 1] == '0' + count)
	{
		d[n - 2]++;
		d[n - 1] = d[n - 2] + 1;
	}
	else
		d[n - 1]++;
	if (k == 1 || d[n - 1] > '9')
		d[n - 1] = d[n - 2] + 1;
}

void	ft_print_combn(int n)
{
	char	d[10];
	int		i;

	if (n > 9 || n < 1)
		return ;
	i = 0;
	while (i < n)
	{
		d[i] = i + '0';
		i++;
	}
	while (is_max(d, n) != n)
	{
		writeout(d, n);
		increment(d, n, 9);
	}
	writeout(d, n);
}
