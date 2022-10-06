/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 12:20:17 by bpoussar          #+#    #+#             */
/*   Updated: 2022/09/20 09:26:16 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c, char b, char a)
{
	write(1, &c, 1);
	write(1, &b, 1);
	write(1, &a, 1);
}

void	ft_print_comb(void)
{
	int	t;
	int	h;
	int	u;

	t = 0;
	while (t <= 7)
	{
		h = t + 1;
		while (h <= 8)
		{
			u = h +1;
			while (u <= 9)
			{
				ft_putchar(t + '0', h + '0', u + '0');
				if (! (t == 7 && h == 8 && u == 9))
					write(1, ", ", 2);
				u++;
			}
			h++;
		}
		t++;
	}
}
