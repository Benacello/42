/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 20:41:18 by bpoussar          #+#    #+#             */
/*   Updated: 2022/09/30 12:31:59 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write (1, &str[i], 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);	
}

void	ft_swap(char 
int	main(int argc, char **argv)
{
	char	*tmp;
	int	ac;
	int	l;
	
	ac = 1;
	l = 0;
	while (l <= argv[argc - 1][ft_strlen(argv[argc - 1])-1])
	{
		while (argv[ac][l])
			if argv[ac][l] > argv[ac + 1]
				ft_swap(argv[ac], argv[ac +1];
			
	}

	


	return (0);
}
