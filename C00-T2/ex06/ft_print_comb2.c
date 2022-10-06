/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 14:35:14 by bpoussar          #+#    #+#             */
/*   Updated: 2022/09/19 17:27:50 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{	
	long	bn;
	int		lo;

	bn = nb;
	if (bn < 0)
	{
		bn = bn * -1;
		write (1, "-", 1);
	}
	if (bn < 10)
		ft_putchar(bn + '0');
	if (bn > 9)
	{
		lo = bn / 10;
		ft_putnbr(lo);
		lo = bn % 10;
		ft_putchar(lo + '0');
	}
}

void	ft_virgule(int a)
{
	if (a != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;	

	a = 0;
	while (a < 99)
	{	
		b = a + 1;
		while (b < 100)
		{
			if (a < 10)
				ft_putchar('0');
			ft_putnbr(a);
			ft_putchar(' ');
			if (b < 10)
				ft_putchar('0');
			ft_putnbr(b);
			ft_virgule(a);
			b++;
		}
		a++;
	}
}
