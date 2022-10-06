/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main06.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:36:30 by bpoussar          #+#    #+#             */
/*   Updated: 2022/10/01 17:44:49 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);



int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%d\n", ft_str_is_printable(argv[1]));
	return (0);
}
/*

int	main()
{

	char *p = "\t";
	printf("%d\n", ft_str_is_printable(p));
	


}*/
