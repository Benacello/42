/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 18:47:11 by bpoussar          #+#    #+#             */
/*   Updated: 2022/09/27 21:46:02 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
#include <string.h> 


//int ft_strncmp(char *s1, char *s2, unsigned int n);

int	atoi(char *s);

int	main(int argc, char ** argv)
{
	if (argc == 4)
	{
//	printf("%d\n", ft_strncmp(argv[1], argv[2], atoi(argv[3])));
	printf("%d\n", strncmp(argv[1], argv[2], atoi(argv[3])));
	}
	return (0);
}
