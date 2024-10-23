/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuzyilma <kuzyilma@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 14:31:15 by kuzyilma          #+#    #+#             */
/*   Updated: 2024/02/14 11:01:19 by kuzyilma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*p;
	int		i;

	i = 0;
	while (src[i])
		i++;
	p = (char *)malloc(i * sizeof(char));
	i = 0;
	while (src[i])
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

int	str_what(char *temp, char *charset)
{
	int	i;
	int	j;

	if (temp[0] == '\0')
		return (0);
	i = 0;
	while (temp[i])
	{
		j = 0;
		while (charset[j])
		{
			if (charset[j] == temp[i])
				temp[i] = (-temp[i]);
			j++;
		}
		i++;
	}
	i = 1;
	j = 0;
	if (!(temp[0] < 0))
		j++;
	while (temp[i++])
		if (temp[i - 1] < 0 && !(temp[i] < 0))
			j++;
	return (j);
}

void	split2(char *temp, int wordcount, char **ans)
{
	int		i;
	int		k;
	int		n;
	int		size;
	int		p;

	n = 0;
	i = 0;
	while (n < wordcount)
	{
		p = 0;
		while ((int)temp[i] < 0)
			i++;
		k = i;
		while (!((int)temp[i] <= 0))
			i++;
		ans[n] = (char *)malloc(sizeof(char) * (i - k + 1));
		size = i - k ;
		while (p < size)
			ans[n][p++] = temp[k++];
		ans[n][p] = '\0';
		n++;
	}
}

char	**ft_split(char *str, char *charset)
{
	char	*temp;
	int		wordcount;
	char	**ans;

	temp = ft_strdup(str);
	wordcount = str_what(temp, charset);
	ans = (char **)malloc(sizeof(char *) * (wordcount + 1));
	ans[wordcount] = 0;
	if (wordcount != 0)
		split2(temp, wordcount, ans);
	return (ans);
}
