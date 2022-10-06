/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:36:55 by bpoussar          #+#    #+#             */
/*   Updated: 2022/09/26 17:17:45 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	atoi(char *s);

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
    	printf("%s\n", ft_strncat(argv[1], argv[2], atoi(argv[3])));
//	printf("%s\n", strncat(argv[1], argv[2], atoi(argv[3])));
	}
	return (0);
}
