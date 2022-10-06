/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:50:57 by bpoussar          #+#    #+#             */
/*   Updated: 2022/10/03 18:39:03 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	main(int argc, char **argv)
{
	int	size_of_range;
	int	*r;
	int	i;

	i = 0;
	if (argc == 3)
	{
		size_of_range = ft_ultimate_range(&r, atoi(argv[1]), atoi(argv[2]));
		printf("Size of range %d\n", size_of_range);
		while (i < size_of_range)
		{
			printf("%d ", r[i]);
			i++;
		}

	}
	return (0);
}
