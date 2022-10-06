/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpoussar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:31:26 by bpoussar          #+#    #+#             */
/*   Updated: 2022/09/29 17:58:00 by bpoussar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && (i < n))
	{
		dest[i] = src[i];
		i++;
	}	
	if (i < n && dest[i] != '\0')
		dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>

int main()
{
	char dest[] = "hello world";
	char dest1[] = "hello world";

	printf("%s\n", ft_strncpy(dest, "123456789", 20));
	printf("%s\n", strncpy(dest, "123456789", 20));
}