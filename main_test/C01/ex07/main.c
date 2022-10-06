/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:29:33 by bpoussar          #+#    #+#             */
/*   Updated: 2022/09/21 21:15:50 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);
int	atoi(char *s);

int	main(int argc, char **argv)
{
	ft_rev_int_tab(atoi(argv[1]), atoi(argv[1]));
	return (0);
}
