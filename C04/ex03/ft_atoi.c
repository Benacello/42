/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:54:43 by bpoussar          #+#    #+#             */
/*   Updated: 2022/09/28 15:53:30 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nb;
	int	s;

	i = 0;
	nb = 0;
	s = 1;
	while ((str[i] >= '\t' && str[i] <= '\r')
		|| str[i] == ' ')
			i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = s * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = ((nb * (10)) + str[i]) - '0';
		i++;
	}
	return (nb * (s));
}
