/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 15:03:18 by bpoussar          #+#    #+#             */
/*   Updated: 2022/10/05 11:06:28 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;

	size = max - min;
	*range = malloc(sizeof(*range) * size);
	if (!*range)
		return (-1);
	if (size <= 0)
		return (0);
	i = 0;
	while (i < size)
	{
		(*range)[i] = (min + i);
			i++;
	}
	return (size);
}
