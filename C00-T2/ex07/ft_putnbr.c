/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:21:24 by bpoussar          #+#    #+#             */
/*   Updated: 2022/09/19 17:31:15 by bpoussar         ###   ########.fr       */
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
