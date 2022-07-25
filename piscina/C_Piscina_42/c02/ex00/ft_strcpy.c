/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anglopez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 16:22:16 by anglopez          #+#    #+#             */
/*   Updated: 2022/05/24 19:42:36 by anglopez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int		i;
	char	*aux;

	i = 0;
	aux = dest;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (aux);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char dest[] = "hola";
	char src[] = "adi";

	char dest2[] = "hola";
	char src2[] = "adi";

	printf("\ndest:         %s\n", dest);
	printf("ft_strcpy:    %s\ndest:         %s\nsr
c:          %s\n\n", ft_strcpy(dest, src), dest, src);
	printf("dest2:         %s\n", dest2);
	printf("strcpy:        %s\ndest2:         %s\nsrc
2:          %s\n\n", strcpy(dest2, src2), dest2, src2);
	return (0);
}
*/
