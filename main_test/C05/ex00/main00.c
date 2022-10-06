/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:20:32 by bpoussar          #+#    #+#             */
/*   Updated: 2022/10/02 15:25:41 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	atoi(char *s);

int	ft_iterative_factorial(int nb);

int	main(int argc, char **argv)
{
	if ( argc == 2)
	{
		printf("%d\n", ft_iterative_factorial(atoi(argv[1])));
	}
}
