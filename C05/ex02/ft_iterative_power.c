/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 08:34:38 by bpoussar          #+#    #+#             */
/*   Updated: 2022/10/03 09:14:41 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	res;

	i = 2;
	res = nb;
	if ((nb && power) == 0)
		return (1);
	while (i <= power)
	{
		res  = res * nb;
		i++;
	}
	return (res);
}
