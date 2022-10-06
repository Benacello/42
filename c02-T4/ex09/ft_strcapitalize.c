/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 13:06:49 by bpoussar          #+#    #+#             */
/*   Updated: 2022/09/25 18:57:08 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_test_alpha_num(char str)
{
	if (((str < 'A') || (str > 'Z'))
		&& ((str < 'a') || (str > 'z'))
		&& ((str < '0') || (str > '9')))
		return (0);
	else
		return (1);
}

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	*str = *ft_strlowcase(str);
	if (i == 0)
	{
		if ((ft_test_alpha_num(str[i]) == 0)
			&& (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
	}							
	while (str[i] != '\0')
	{
		if ((ft_test_alpha_num(str[i - 1]) == 0)
			&& ((str[i] >= 'a' && str[i] <= 'z')))
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
