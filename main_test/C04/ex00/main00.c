/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:09:12 by bpoussar          #+#    #+#             */
/*   Updated: 2022/09/28 11:51:17 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	if (argc == 2)
	printf("%d\n", ft_strlen(argv[1]));
	return (0);
}
