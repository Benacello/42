/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 15:31:58 by bpoussar          #+#    #+#             */
/*   Updated: 2022/10/02 22:07:33 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return(0);
	if (nb != 1)
	{
		return (nb * ft_recursive_factorial(nb -1));
	}
	else
		return (nb);
}
