/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:52:28 by bpoussar          #+#    #+#             */
/*   Updated: 2022/09/22 18:57:15 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str);


int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d", ft_str_is_numeric(argv[1]));
	return (0);
}
