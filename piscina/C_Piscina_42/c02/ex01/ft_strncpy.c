/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:31:02 by anglopez          #+#    #+#             */
/*   Updated: 2022/05/24 11:44:40 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <string.h>

int	main(void)
{
	char dest[] = "ho";
	char src[] = "adios";

	char dest2[] = "ho";
	char src2[] = "adios";

	unsigned int n = 7;
	unsigned int n2 = 7;
	
	printf("*****************\ndest:         %s\n", dest);
	printf("ft_strncpy:    %s\ndest:         %s\nsr
  c:          %s\n\n", ft_strncpy(dest, src, n), dest, src);
	printf("dest2:         %s\n", dest2);
	printf("strncpy:        %s\ndest2:         %s\nsrc
  2:          %s\n\n***************", strncpy(dest2, src2, n2), dest2, src2);
	return (0);
}
*/
