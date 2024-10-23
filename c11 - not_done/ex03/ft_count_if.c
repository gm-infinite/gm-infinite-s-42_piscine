/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzyilma <kuzyilma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:34:53 by kuzyilma          #+#    #+#             */
/*   Updated: 2024/02/14 11:39:52 by kuzyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	check;

	i = 0;
	check = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
			check++;
		i++;
	}
	return (check);
}
