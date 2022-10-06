/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 08:43:48 by bpoussar          #+#    #+#             */
/*   Updated: 2022/10/03 08:50:40 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	atoi(char *s);

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("%d\n", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	}
}
