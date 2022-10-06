/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 11:14:40 by bpoussar          #+#    #+#             */
/*   Updated: 2022/10/05 22:18:22 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_count(int size, char **strs, char *sep)
{
	int	i_strs;
	int	size_total;

	size_total = ft_strlen(sep) * (size - 1);
	i_strs = 0;
	while (i_strs <= (size - 1))
		size_total += ft_strlen(strs[i_strs++]);
	return (size_total);
}

char	*ft_strcat(char *s1, char *s2)
{
	int	i_s1;
	int	i_s2;

	i_s1 = ft_strlen(s1);
	i_s2 = 0;
	while (s2[i_s2] != '\0')
	{
		s1[i_s1] = s2[i_s2];
		i_s1++;
		i_s2++;
	}
	s1[i_s1] = '\0';
	return (s1);
}

char	*ft_strjoin(int size, char **strs, char *sep)

{
	char	*ccat;
	int		i_size;
	int		i_sep;

	ccat = malloc(sizeof(char *) * (ft_count(size, strs, sep) + 1));
	if (!ccat)
		return (NULL);
	if (size == 0)
	{
		ccat[0] = '\0';
		return (ccat);
	}
	i_size = 0;
	while (i_size <= (size - 1))
	{
		ccat = ft_strcat(ccat, strs[i_size]);
		i_sep = 0;
		while (sep[i_sep] != '\0')
			ccat[ft_strlen(ccat)] = sep[i_sep++];
		i_size++;
	}
	ccat[ft_strlen(ccat)] = '\0';
	return (ccat);
}
