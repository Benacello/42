/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 19:12:14 by bpoussar          #+#    #+#             */
/*   Updated: 2022/09/17 22:15:24 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	coordinates(int row, int col)
{
	int	cr;
	int	cc;
	int	b;
	int	s;

	s = 0;
	b =0;
	cc = 0;
	cr = 0;

	ft_putchar(65);
	if (col > 2)	
		while (b != col - 2)
	{	ft_putchar(66);
		b++;
	}
	if (col > 1) 
		ft_putchar(67);
	ft_putchar(10);
	if (row >1)  // new fonctions?
	{
		ft_putchar(66);
		while (s != col - 2)
		{
			ft_putchar(32);
			b++;
		}
	}
	
	
}





int	main(void)
{
	int	r;
	int	c;

	r = 3;
	c = 3;
	coordinates(r, c);
	return (0);
}
