/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 13:09:10 by bpoussar          #+#    #+#             */
/*   Updated: 2022/09/21 13:20:48 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	sw;

	i = 0;
	while (i < size / 2)
	{
		sw = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = sw;
		i++;
		size--;
	}
}
