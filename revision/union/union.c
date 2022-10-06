/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:05:46 by bpoussar          #+#    #+#             */
/*   Updated: 2022/10/06 18:23:51 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> 
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_strcat(char *s, char *d)
{
	int	i_s;
	int	i_d;

	i_s = 0;
	i_d = 0;
	while (s[i_s])
		i_s++;
	while (d[i_d])
	{
		s[i_s++] = d[i_d++];
	}
	s[i_s] = '\0';
	return (s);
}

int	ft_check(char *str, int	i)
{
	int	j;
	j = i - 1;
	while (j >= 0)
	{
		if (str[i] == str[j])
			return (0);
		j--;
	}
	return (1);
}

char	*ft_union(char *str, char *str2)
{
	int	i;

	i = 0;
	str = ft_strcat(str, str2);
	while (str[i])
	{
		if (ft_check(str, i) == 1)
			ft_putchar(str[i] +'0');
		i++;
	}
	return(str);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
	ft_union(argv[1], argv[2]);

	
	}
}
