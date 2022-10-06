/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:58:00 by bpoussar          #+#    #+#             */
/*   Updated: 2022/09/27 22:11:18 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%s\n", ft_strstr(argv[1], argv[2]));
//		printf("%s\n", strstr(argv[1], argv[2]));

	return (0);
}
