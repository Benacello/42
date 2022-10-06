/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:09:10 by bpoussar          #+#    #+#             */
/*   Updated: 2022/09/25 10:25:52 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	s;

	s = size;
	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[s - 1];
		tab[s - 1] = tmp;
		i++;
		s--;
	}
}
