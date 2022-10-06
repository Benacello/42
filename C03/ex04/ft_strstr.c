/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:15:13 by bpoussar          #+#    #+#             */
/*   Updated: 2022/09/28 13:43:35 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*j;
	int		i;
	int		k;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		k = 0;
		j = &str[i];
		while (str[i] == to_find[k] && (to_find[k] != '\0'))
		{
			if (to_find[k + 1] == '\0')
				return (j);
			k++;
			i++;
		}
	i++;
	}
	return (0);
}
#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int	main(int argc, char **argv)
{
	if (argc == 3)
		printf("%s\n", ft_strstr(argv[1], argv[2]));
		printf("%s\n", strstr(argv[1], argv[2]));

	return (0);
}
