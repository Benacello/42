/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:47:11 by bpoussar          #+#    #+#             */
/*   Updated: 2022/09/27 12:06:32 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <string.h> 


int ft_strcmp(char *s1, char *s2);

int	main(int argc, char ** argv)
{
	if (argc == 3)
	{
	printf("%d\n", ft_strcmp(argv[1], argv[2]));
//	printf("%d\n", strcmp(argv[1], argv[2]));
	}
	return (0);
}
