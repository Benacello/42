/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   demostructure.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:47:36 by bpoussar          #+#    #+#             */
/*   Updated: 2022/10/04 17:31:33 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

typedef struct s_si
{
	int	i;
	int	j;
	int	str;
	int	len;
	char	*tab;
}	t_str;

int	size_of(int size, char **strs)
{
	t_str	str;

	str.len = 0;
	str.str = 0;
	while (str.str <= (size - 1))
	{
		str.i = 0;
		while (strs[str.str][str.i] != '\0')
		{
			str.i++;
		}
		str.len = str.i + str.len;
		str.str++;
	}
	return (str.len);
}

void	copy(int size, char **strs, char *join, char *sep)
{
	t_str	all;

	all.str = 0;
	all.i = 0;
	while (all.str <= (size -1))
	{
		all.j = 0;
		while (strs[all.str][all.j] != '\0')
		{
			join[all.i++] = strs[all.str][all.j++];
		}
		all.len = 0;
		while ((sep[all.len] != '\0') && all.str < (size - 1))
		{
			join[all.i++] = sep[all.len];
		}
		all.str++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{	
	t_str	fn;

	fn.i = 0;
	while (sep[fn.i] != '\0')
		fn.i++;
	fn.len = size_of(size, strs) + (fn.i * (size - 1));
	fn.tab = malloc(sizeof(char) * (fn.len + 1));
	if (!fn.tab)
	{
		return (NULL);
	}
	copy(size, strs, fn.tab, sep);
	return (fn.tab);
}

int	main(int argc, char **argv)
{
	char	*s;
	char	sep[]=" -- ";

	if (argc >= 2)
	{
		s = ft_strjoin(argc, argv,sep );
		printf("%s\n", s);
	}
}
