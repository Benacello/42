/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:11:29 by bpoussar          #+#    #+#             */
/*   Updated: 2022/09/18 14:14:14 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_char(int i, int j, int x, int y)
{
	if ((i == 0 && j == 0) || ((i == y - 1 && j == x - 1) && y != 1 && x != 1))
	{
		ft_putchar('/');
		return ;
	}
	if (((i == 0) && (j == x - 1)) || ((i == y - 1) && (j == 0)))
	{
		ft_putchar('\');
		return ;
	}
	if (((i == 0) && (j != 0)) && ((i == 0) && (j != x - 1)))
	{
		ft_putchar('*');
		return ;
	}
	if (((i == y - 1) && (j != 0)) && ((i == y - 1) && (j != x - 1)))
	{
		ft_putchar('*');
		return ;
	}
	if (((j == 0) || (j == x - 1)) && ((i != 0) || (i != y - 1)))
		ft_putchar('*');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < y)
	{
		while (j < x)
		{
			print_char(i, j, x, y);
			j++;
		}
		if (x > 0)
			ft_putchar('\n');
		j = 0;
		i++;
	}
}
