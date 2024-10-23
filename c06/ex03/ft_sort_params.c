/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzyilma <kuzyilma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:29:02 by kuzyilma          #+#    #+#             */
/*   Updated: 2024/02/12 08:25:07 by kuzyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_sort_para_av(int size, char **av)
{
	int		i;
	int		k;
	char	*tab;

	i = 1;
	while (i < size)
	{
		k = 1;
		while (k < size - 1)
		{
			if (ft_strcmp(av[k], av[k + 1]) > 0)
			{
				tab = av[k];
				av[k] = av[k + 1];
				av[k + 1] = tab;
			}
			k++;
		}
		i++;
	}
}

void	print(char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
		j = 0;
	}
}

int	main(int ac, char **av)
{
	ft_sort_para_av(ac, av);
	print(av);
}
