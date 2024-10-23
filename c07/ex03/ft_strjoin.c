/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzyilma <kuzyilma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 11:53:28 by kuzyilma          #+#    #+#             */
/*   Updated: 2024/02/13 12:44:04 by kuzyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	sizeneeded(int size, char **strs, char *sep)
{
	int	u1;
	int	u2;
	int	j;
	int	i;

	j = 0;
	u1 = 0;
	u2 = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
			i++;
		u1 += i;
		j++;
	}
	while (sep[u2])
		u2++;
	return (((u1 + u2 * (size - 1)) + 1));
}

void	strjoin2(int size, char **strs, char *sep, char *ans)
{
	int	j;
	int	i;
	int	k;

	j = 0;
	k = 0;
	while (j < size)
	{
		i = 0;
		while (strs[j][i])
		{
			ans[k] = strs[j][i];
			k++;
			i++;
		}
		i = 0;
		while (sep[i] && j != size - 1)
		{
			ans[k] = sep[i];
			k++;
			i++;
		}
		j++;
	}
	ans[k] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ans;
	int		anssize;

	if (size < 1)
	{
		ans = (char *)malloc(sizeof(char) * 1);
		ans[0] = '\0';
		return (ans);
	}
	anssize = sizeneeded(size, strs, sep);
	ans = (char *)malloc(sizeof(char) * anssize);
	strjoin2(size, strs, sep, ans);
	return (ans);
}
