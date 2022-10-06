/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main02ft.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 12:31:24 by bpoussar          #+#    #+#             */
/*   Updated: 2022/09/23 12:44:41 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str);

int	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
		ft_putchar(ft_str_is_alpha(argv[1]) + '0');
	return (0);
}

