/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:14:45 by bpoussar          #+#    #+#             */
/*   Updated: 2022/10/04 18:44:02 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


int	*ft_range(int min, int max);

int	main(int argc, char **argv)
{
	int	*r;
	int	i;

	i = 0;
	r = ft_range(atoi(argv[1]), atoi(argv[2]));
	if (argc == 3)
	{
		while (i < (atoi(argv[2]) - atoi(argv[1])))
		{
		printf("%d\n",r[i] );
		i++;
		}
	}
	return (0);
}
