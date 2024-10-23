/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzyilma <kuzyilma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 11:28:44 by kuzyilma          #+#    #+#             */
/*   Updated: 2024/02/14 11:33:59 by kuzyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;
	int	check;

	check = 1;
	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			check++;
	}
	if (check == 0)
		return (0);
	return (1);
}
