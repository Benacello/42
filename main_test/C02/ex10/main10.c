/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main10.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:47:29 by bpoussar          #+#    #+#             */
/*   Updated: 2022/10/02 12:06:15 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	atoi(char *s);

int	main(int argc, char **argv)
{

	if (argc == 4)
	{

//		printf("original :%ld\n%s\n", strlcpy(argv[1], argv[2], atoi(argv[3])), argv[1]); 	
		printf("ft 42    :%d\n%s\n", ft_strlcpy(argv[1], argv[2], atoi(argv[3])), argv[1]); 	
	
	}
	return (0);
}
