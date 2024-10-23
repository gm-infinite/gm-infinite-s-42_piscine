/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzyilma <kuzyilma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 12:43:09 by kuzyilma          #+#    #+#             */
/*   Updated: 2024/02/14 13:30:21 by kuzyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*ans;
	int			i;
	char		*temp;

	if (ac < 0)
		return (NULL);
	ans = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	ans[ac].str = 0;
	while (--ac >= 0)
	{
		i = 0;
		ans[ac].str = av[ac];
		while (av[ac][i])
			i++;
		ans[ac].size = i;
		temp = (char *)malloc(sizeof(char) * (i + 1));
		while (i-- > 0)
			temp[i] = av[ac][i];
		temp[i] = '\0';
		ans[ac].copy = temp;
	}
	return (ans);
}
