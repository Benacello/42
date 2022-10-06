/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:39:36 by bpoussar          #+#    #+#             */
/*   Updated: 2022/10/02 15:40:39 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	atoi(char *s);

int	ft_recursive_factorial(int nb);

int	main(int argc, char **argv)
{
	if ( argc == 2)
	{
		printf("%d\n", ft_recursive_factorial(atoi(argv[1])));
	}
}

