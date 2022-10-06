/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:37:48 by bpoussar          #+#    #+#             */
/*   Updated: 2022/10/04 11:56:29 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(int argc, char **argv)
{
	char	*s;
	char	*sep;

	sep = "******";
	if (argc >= 2)
	{
		s = ft_strjoin(argc, argv,sep );
		printf("%s\n", s);
	}
}

