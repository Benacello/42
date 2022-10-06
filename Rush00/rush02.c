/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:16:26 by bpoussar          #+#    #+#             */
/*   Updated: 2022/09/18 14:26:45 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_char(int i, int j, int x, int y) 
{
	if ((i == 0 && j == 0) || ((i == 0) && (j == x - 1)))
	{
		ft_putchar('A');
		return ;
	}
	if ( ((i == y - 1 && j == x - 1) && y != 1 && x != 1)|| ((i == y - 1) && (j == 0))) 
	{
		ft_putchar('C');
		return ;
	}
	if (((i == 0) && (j != 0)) && ((i == 0) && (j != x - 1)))
	{
		ft_putchar('B');
		return ;
	}
	if (((i == y - 1) && (j != 0)) && ((i == y - 1) && (j != x - 1)))
	{
		ft_putchar('B');
		return ;
	}
	if (((j == 0) || (j == x - 1)) && ((i != 0) || (i != y - 1)))
		ft_putchar('B');
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

int	main(void)
{
	int	a; // coluns
	int	b; // rows
	
	a = 1;
	b = 1;
	rush(a, b);
	return (0);
}

