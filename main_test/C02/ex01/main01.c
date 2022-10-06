/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 10:10:34 by bpoussar          #+#    #+#             */
/*   Updated: 2022/10/02 11:56:15 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char*src, unsigned int n);

int	atoi(char *s);

int	main(int argc, char **argv)
{
	if (argc == 4)
	{	
/*		strncpy(argv[1], argv[2], atoi(argv[3]));
		printf("original fonction :%s\n", argv[1]);*/
		ft_strncpy(argv[1], argv[2], atoi(argv[3]));
		printf("custom fonction   :%s\n", argv[1]);
	}
	return (0);
}
